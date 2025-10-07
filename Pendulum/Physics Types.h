#pragma once
/*
@file		Physics Types
@author		Perry Hebert
@version	1.0



*/

#include<iostream>
#include"Physics Constants.h"

struct Point {
	double x;
	double y;
};

enum Physical_Object {Element, Density, viscosity, weight, location, radius};


class Physics{

public:

	/*
	lets you set up a customized object by using an enum (SHIP, ASTEROID, or PHOTON_TORPEDO)
	@param		enum  (Solid, liquid, gas)
	@param		location (point (x,y)) if out of bounds will change it to be inbounds
	@param		velocity (point (x,y)) how much it moves when changing position (-MAX VELOCITY to MAX VELOCITY)
	@param		radius 
	@return		and object with all the set params
	*/
	Physics(Physical_Object type, double Density, double viscosity, Point location, double radius);

	//=============================================
	//mutators

	/*
	lets you set the radius of and object Ex: yourObjectName.setRadius()
	@param		size how big or small you want it
	@return		if true your object with the inputted radius / if false set to 10
	*/
	bool setRadius(double radius);

	/*
	lets you set the location of and object withen bounds Ex: yourObjectName.setLocation()
	@param		your horizontal position (left to right)
	@param		your verical position (top down)
	@return		your object in the position you gave it
	*/
	bool setLocation(int x, int y);


	//============================================
	//accessors

	/*
	returns the radius of an object Ex: yourObjectName.getRadius
	@return		double (radius)
	*/
	double getRadius() const;

	/*
	returns the type of the object Ex: yourObjectName.getType
	@return		SpaceObjType (type)
	*/
	Physical_Object getType() const;

	/*
	returns a point of the objects location Ex: yourObjectName.getLocation
	@return		point (x,y)
	*/
	Point getLocation() const;

	/*
	tells you how many times it was drawn on the window
	@return		int amount it has been drawn
	*/
	int getTimesDrawn();

	//============================================
	//Draw Functions



	//============================================
	//others

	/*
	changes the position based on the velocity Ex: yourObjectName.updatePosition
	@return		location + or - MAX_VELOCITY
	*/
	void updatePosition();

	/*
	shows the radius, location, velocity, and angle of a object in comand prompt Ex: yourObjectName.dumpData
	*/
	void dumpData() const;


private:
	Physical_Object type;		//type of object
	Point location;			//current location (x,y)
	Point velocity;			//current velocity (in pixels/frame)
	double radius;			//gross radius of object (for collision detection)
	int times_Drawn;		//how long it's been on the screen
};
