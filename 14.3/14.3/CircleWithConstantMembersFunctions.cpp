#include "CircleWithConstantMemberFunctions.h"


int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

Circle::Circle(double radius)
{
	this->radius = radius;
	numberOfObjects++;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	return (radius * radius * 3.14159);
}


void Circle::setRadius(double radius)
{
	this->radius = radius;
}

int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}


bool Circle::operator<(Circle C1)
{
	if (radius < C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator<=(Circle C1)
{
	if (radius <= C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator==(Circle C1)
{
	if (radius == C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator!=(Circle C1)
{
	if (radius != C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator>(Circle C1)
{
	if (radius > C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator>=(Circle C1)
{
	if (radius >= C1.getRadius())
		return true;
	else
		return false;
}