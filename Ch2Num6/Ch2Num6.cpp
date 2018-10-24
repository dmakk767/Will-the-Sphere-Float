// Ch2Num6.cpp : Defines the entry point for the console application.
//

//Takes in the weight and radius of a sphere and determines if it will float or not.

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

//set constants
const double y = 62.4;
double weight = 0.0, radius = 0.0, volume = 0.0, Fb = 0.0;

int main()
{	
	cout << "What is the weight in pounds of the sphere?" << endl;
	cin >>  weight;
	cout << "What is the radius of the sphere in feet?" << endl;
	cin >> radius;

	volume = ((4.0 / 3.0)*(M_PI)*(pow(radius, 3)));
	Fb = (volume) * (y) / (pow((radius + radius), 3));
	if (Fb >= weight)
	{
		cout << "The sphere will float." << endl;
	}
	else
	{
		cout << "The sphere will sink." << endl;
	}
	
    return 0;
}

