#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	int a = 200;
	int b = 200;


	point* A = new point[a];
	point* B = new point[b];


	for (int i = 0; i < a; i++)
	{
		float x = 69 + (rand() % 21);
		float y = 69 + (rand() % 21);
		A[i].setx(x);
		A[i].sety(y);
	}

	for (int i = 0; i < b; i++)
	{
		float x = 19 + (rand() % 21);
		float y = 19 + (rand() % 21);
		B[i].setx(x);
		B[i].sety(y);
	}

	point centerA = Cntr(A, a);
	point centerB = Cntr(B, b);


	for (int i = 0; i < 20; i++)
	{
		float x = 4 + (rand() % 96);
		float y = 4 + (rand() % 96);
		point d(x, y);
		closeto(A, a, B, b, d);
		cout << endl;
	}

}