
/*
@file		Pendulum Physics
@author		Perry Hebert
@version	1.2

This is the source code for Physics Types.h

*/

#include"Physics Types.h"

Physics::Physics(Physical_Object type, double Density, double viscosity, Point location, double radius) {

	this->type = type;
	setRadius(radius);
	setLocation(location.x, location.y);
	times_Drawn = 0;

}

//=============================================
//mutators

bool Physics::setRadius(double radius) {
	if (radius < 1) {
		this->radius = 10;
		return false;
	}

	this->radius = radius;
	return true;
}

bool Physics::setLocation(int x, int y) {

	bool outOfBounds = true;

	while (x < 0) {
		x = SCREEN_WIDTH + x;
		outOfBounds = false;
	}
	while (x > SCREEN_WIDTH) {
		x = x % SCREEN_WIDTH;
		outOfBounds = false;
	}

	location.x = x;

	while (y < 0) {
		y = SCREEN_HEIGHT + y;
		outOfBounds = false;
	}
	while (y > SCREEN_HEIGHT) {
		y = y % SCREEN_HEIGHT;
		outOfBounds = false;
	}

	location.y = y;

	if (outOfBounds == false) {
		return false;
	}

	return true;

}

//============================================
//accessors

int Physics::getTimesDrawn() {
	return times_Drawn;
}

Physical_Object Physics::getType() const {
	return type;
}

double Physics::getRadius() const {
	return radius;
}

Point Physics::getLocation() const {
	return location;
}

Point Physics::getVelocity() const {
	return velocity;
}

//============================================
//Draw Functions




//============================================
//others

void Physics::updatePosition() {

	location.x = location.x + velocity.x;
	location.y = location.y + velocity.y;

	setLocation(location.x, location.y);

}

void SpaceObject::dumpData() const {

	std::cout << "type: " << type << '\n';
	std::cout << "radius: " << radius << '\n';
	std::cout << "current location is: (" << location.x << ',' << location.y << ')' << '\n';
	std::cout << "current velocity is in the horizontal direction is: " << velocity.x << '\n';
	std::cout << "current velocity is in the vertical direction is: " << velocity.y << '\n';

}

