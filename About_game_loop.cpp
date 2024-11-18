// Game Loop Introduction
#include <graphics.h>

int main()
{
	initwindow(600, 500, "Game loop in graphics.h"); // Initializing graphics window

	while(true)
	{
		cleardevice(); // Prepare window for new Graph
		
		// Some statements
		//-----***-----//
		//-----***-----//
		//-----***-----//

		if(GetAsyncKeyState(VK_ESCAPE)) 
			break; // To exit from infinite loop
		
		delay(10); // For control the speed of animation
	}

	getch();
	closegraph();
	return 0;
}
/*
Explaination of game loop:

	A game loop is a continuous cycle in a video game that updates the game’s state and renders visuals to the screen.

	It consists of three main steps: 
		1).	processing player input
			
		2).	updating the game world (like character movement or physics)
		
		3).	drawing the updated scene

	Always remember that to optimize a game loop, keep it as simple as possible. 

	The loop should focus only on the essential tasks.

	Each task should be done in a minimal, efficient way, without adding unnecessary methods or complex logic inside the loop.

	Characteristics of game loop:

		Repetitive: 

			It runs continuously, repeating the process of updating the game state and rendering the screen.

		Real-Time:

			It keeps the game responsive to player input and updates the game world in real-time.

		Efficiency: 
		
			It aims to run quickly, with minimal overhead, ensuring smooth gameplay.

		Frame Rate Control:

		 	It often controls the number of updates and frames per second (FPS) to balance performance and smoothness.

	So, this was simple informaion about game loop.
*/
