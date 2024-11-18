// Making Paddle Smash game
#include <graphics.h>

int main()
{
	initwindow(600, 600, "Paddle Smash"); // Setting the graphics window size and name

	int ballX = 250, ballY = 100, ballRadius = 10; // Ball initial position
	int xSpeed = 3, ySpeed = 3;					   // Speed of ball in X and Y direction

	// Paddle settings
	int paddleWidth = 100, paddleHeight = 15;
	int paddleX = 300, paddleY = 585; // Paddle position
	int paddleSpeed = 5;			  // Speed of paddle movement

	// Display "Press SPACE to Start" message
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 25);	 // Font style
	setcolor(WHITE);							 // Text color
	outtextxy(160, 300, "Press SPACE to Start"); // Display message

	// Wait for the player to press SPACE before starting the game
	while (!GetAsyncKeyState(VK_SPACE))
	{
		delay(10);
	}

	// Game Loop
	while (true)
	{
		// Clear the screen for the next frame
		cleardevice();

		// Draw the ball
		setcolor(WHITE);
		fillellipse(ballX, ballY, ballRadius, ballRadius);

		// Draw the paddle
		setcolor(WHITE);
		rectangle(paddleX, paddleY, paddleX + paddleWidth, paddleY + paddleHeight);
		floodfill(paddleX + 1, paddleY + 1, WHITE); // Fill the paddle with color

		// Ball movement
		ballX += xSpeed;
		ballY += ySpeed;

		// Ball collision with walls
		if (ballX <= ballRadius || ballX >= getmaxx() - ballRadius)
			xSpeed = -xSpeed; // Reverse the ball's X direction

		if (ballY <= ballRadius)
			ySpeed = -ySpeed; // Reverse the ball's Y direction when it hits the top wall

		// Checking Ball collision with paddle
		if (ballY + ballRadius >= paddleY && ballY - ballRadius <= paddleY + paddleHeight &&
			ballX + ballRadius >= paddleX && ballX - ballRadius <= paddleX + paddleWidth)
		{
			ySpeed = -ySpeed; // Ball bounces to the opposite side of the paddle
		}

		// Paddle movement
		if (GetAsyncKeyState(VK_LEFT) && paddleX > 0)
			paddleX -= paddleSpeed; // Move paddle left

		if (GetAsyncKeyState(VK_RIGHT) && paddleX < getmaxx() - paddleWidth)
			paddleX += paddleSpeed; // Move paddle right

		// Game Over if the ball falls below the paddle
		if (ballY >= getmaxy())
		{
			cleardevice();
			settextstyle(TRIPLEX_FONT, HORIZ_DIR, 25);	// Setting fon't style
			setcolor(YELLOW);	// Setting font color
			outtextxy(50, 300, "Game Over! click on cross to exit."); // Message for user
			delay(5000);		// More delay cause of remove flucring
		}

		delay(10); // Delay for smoother animation
	}

	closegraph();
	return 0;
}
/*
Explaination

	I will explain you only game loop process because it is main logic.

	First you should draw ball at particular position for visible to user.
	( Line no. 33 )

	Than after draw the paddle to catch the ball.
	( Line no. 37 )

	Than after move the ball via wall collision.
	( Line no. 42 to Line no. 51 )

	Than check the collision between ball and paddle. If collision found than move ball opposite direction of paddle
	( Line no. 53 to Line no. 58 )

	Than after move the paddle left and right.
	( Line no. 60 to Line no. 65 )

	Than check if ball falls below the paddle; if yes than provide message to user than "game is over!"
	( Line no. 67 to Line no. 75 )

	( Note: don't forgot to add delay after all task )

	So, this was short explaination of game loop.

	I hope you understand everything!!

*/
