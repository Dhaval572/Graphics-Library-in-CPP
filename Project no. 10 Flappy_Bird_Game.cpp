// Flappy bird Game
#include <graphics.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SCREEN_WIDTH 600
#define SCREEN_HEIGHT 600

// Bird properties
int birdX = 100, birdY = 240;
int birdWidth = 20, birdHeight = 20;
int birdVelocity = 0; // Negative for gravity, positive for flap

// Pipe properties
int pipeWidth = 50;
int pipeGap = 150; // The gap between the top and bottom pipes

int pipeX[2] = {SCREEN_WIDTH, SCREEN_WIDTH + SCREEN_WIDTH}; // Two pipes moving at once
int pipeY[2] = {0, 0};                                      // Y-coordinate of the top pipe
int pipeVelocity = 4;                                       // Speed at which pipes move
int score = 0;

// Function to draw the bird
void drawBird()
{
    fillellipse(birdX, birdY, birdWidth, birdHeight); // Draw bird as a circle
}

// Function to draw the pipes
void drawPipes()
{
    setcolor(GREEN);
    for (int i = 0; i < 1; i++)
    {
        // Top pipe
        rectangle(pipeX[i], pipeY[i], pipeX[i] + pipeWidth, pipeY[i] + pipeGap);
        // Bottom pipe
        rectangle(pipeX[i], pipeY[i] + pipeGap + 100, pipeX[i] + pipeWidth, SCREEN_HEIGHT);

        floodfill(pipeX[i], pipeY[i] + 1, GREEN);             // Fill the top pipe area
        floodfill(pipeX[i], pipeY[i] + pipeGap + 101, GREEN); // Fill the bottom pipe area
    }
}

// Function to move the pipes
void movePipes()
{
    for (int i = 0; i < 1; i++)
    {
        pipeX[i] -= pipeVelocity; // Move pipes to the left
        if (pipeX[i] < 0)
        {
            pipeX[i] = SCREEN_WIDTH;                             // Reset pipe to right side
            pipeY[i] = rand() % (SCREEN_HEIGHT - pipeGap - 100); // Randomize top pipe position
        }
    }
}

// Function to check collision with pipes
bool checkCollision()
{
    for (int i = 0; i < 10; i++)
    {
        // If bird is within pipe's x range
        if (birdX + birdWidth / 2 > pipeX[i] && birdX - birdWidth / 2 < pipeX[i] + pipeWidth)
        {
            // Check if bird is colliding with top or bottom pipe
            if (birdY - birdHeight / 2 < pipeY[i] + pipeGap || birdY + birdHeight / 2 > pipeY[i] + pipeGap + 100)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // Initialize graphics
    initwindow(600, 600, "Flappy bird");

    // Display "Press SPACE to Start" message
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 25);   // Font style
    setcolor(WHITE);                             // Text color
    outtextxy(160, 300, "Press SPACE to Start"); // Display message

    while (!GetAsyncKeyState(VK_SPACE))
    {
        delay(10);
    }

    cleardevice();

    srand(time(0));

    // Game loop
    while (true)
    {
        cleardevice(); // Clear the screen

        // Bird behavior (gravity and flap)
        birdVelocity += 1; // Gravity effect
        birdY += birdVelocity;

        // If spacebar is pressed, make the bird "flap"
        if (GetAsyncKeyState(VK_SPACE) & 0x8000)
        {
            birdVelocity = -5; // Flap by applying negative velocity
        }

        // Keep the bird within screen boundaries
        if (birdY > SCREEN_HEIGHT - birdHeight / 2)
        {
            break;
        }
        if (birdY < birdHeight / 2)
        {
            break;
        }

        // Draw the bird and pipes
        drawBird();
        drawPipes();

        // Move the pipes and check for collision
        movePipes();
        if (checkCollision())
        {
            break; // Game over if there is a collision
        }

        for (int i = 0; i < 10; i++)
        {
            // Check if the bird has passed the right edge of the pipe and hasn't passed it before
            if (pipeX[i] + pipeWidth < birdX && pipeX[i] + pipeWidth >= birdX - 3)
            {
                score++; // Player passed through pipes
            }
        }

        // Display score
        setcolor(WHITE);
        char scoreText[20];
        sprintf(scoreText, "Score: %d", score);
        outtextxy(10, 10, scoreText);

        // Delay for smooth game loop
        delay(20);
    }

    // Game over screen
    setcolor(LIGHTCYAN);

    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 25);
    outtextxy(200, SCREEN_HEIGHT / 2, "Game Over");
    char finalScore[20];
    sprintf(finalScore, "Final Score: %d", score);
    outtextxy(200, SCREEN_HEIGHT / 2 + 30, finalScore);
    delay(5000); // Wait before closing

    closegraph();
    return 0;
}
