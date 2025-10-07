
/*
@file		Pendulum Main
@author		Perry Hebert
@version	1.0

The window call code

*/

#include"Physics Constants.h"
#include"Physics Types.h"
#include<cstdlib>
#include<cmath>

const Point Starting_Point = { SCREEN_WIDTH / 2,SCREEN_HEIGHT / 2 };

/*
gives the distance between two points
@param		Point first (x,y)
@param		Point second (x,y)
@return		double distane between the two points given
*/
double distance(Point first, Point second);

//========================================================================================================================================================
int main()
{
	//create graphics window
	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT),
		"Physics",
		sf::Style::Titlebar | 
		sf::Style::Close);

	window.setFramerateLimit(30);

	//creating objects



	//game loop
	while (window.isOpen())
	{
		window.setFramerateLimit(30);

		//========================================================================================================================
		//handle user input (events and keyboard keys being pressed)
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				std::cout << "Bye \n";
				window.close();
			}
		}

		//========================================================================================================================
		// update objects objects 



		//========================================================================================================================
		//collision detection



		//========================================================================================================================
		// draw new frame
		window.clear();


		window.display();
	}

	return 7;
}


//============================================================================
//functions 

bool collision(Physics* object_1, Physics* object_2) {



	return true;
}

double distance(Point first, Point second) {

	double Distance = sqrt(pow((first.x - second.x), 2) + pow((first.y - second.y), 2));

	return Distance;

}