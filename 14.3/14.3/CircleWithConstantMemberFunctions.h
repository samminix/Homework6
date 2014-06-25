#ifndef CIRCLEWITHCONSTANTMEMBERFUNCTIONS_H_
#define CIRCLEWITHCONSTANTMEMBERFUNCTIONS_H_

class Circle{
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();
	bool operator<(Circle);
	bool operator<=(Circle);
	bool operator==(Circle);
	bool operator!=(Circle);
	bool operator>(Circle);
	bool operator>=(Circle);

private:
	double radius;
	static int numberOfObjects;

};

#endif