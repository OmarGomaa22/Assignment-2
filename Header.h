#ifndef POINT_H    
#define POINT_H   

#include <iostream>
#include <cmath>  
using namespace std;


class point
{
public:
	point();
	point(float , float);
	void setx(float);
	void sety(float);
	float getx()const;
	float gety()const;
	void display()const;
	float dist(const point);

private:
	float x;
	float y;
};

#endif 

point::point()
{
	x = 0.0;
	y = 0.0;
}

point::point(float h, float i)
{
	x = h;
	y = i;
}

void point::setx(float k)
{
	x = k;
}

void point::sety(float l)
{
	y = l;
}

float point::getx()const
{
	return x;
}

float point::gety()const
{
	return y;
}

void point::display()const
{
	cout << "(" << x << " , " << y << ")";
}

float point::dist(const point f)
{
	float d;
	d = sqrt(pow(x - f.x, 2) + pow(y - f.y, 2));
	return d;
}

point Cntr(point Arr[], int n)
{
	float averagex, averagey;
	float sumx = 0.0, sumy = 0.0;

	for (int i = 0; i < n; i++)
	{
		sumx = sumx + Arr[i].getx();
		sumy = sumy + Arr[i].gety();
	}

	averagex = sumx / n;
	averagey = sumy / n;

	point P(averagex, averagey);

	return P;
}

void closeto(point N[], int s, point M[], int i, point p)
{
	point centerA = Cntr(N, s);
	point centerB = Cntr(M, i);

	float distanceA = centerA.dist(p);
	float distanceB = centerB.dist(p);

	
	if (distanceA < distanceB)
	{
		cout << " belongs to cluster A." << endl;
	}
	else
	{
		cout << " belongs to cluster B." << endl;
	}

}