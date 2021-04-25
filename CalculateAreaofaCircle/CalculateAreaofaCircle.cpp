// CalculateAreaofaCircle.cpp : This file contains the 'main' function. Program execution begins and ends there.

//THE AREA OF AN ELLIPSE

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius;
    double area;

    //Step 1 Read radii
   cout << "Enter Radius: ";
    cin >> radius ;

    //Step 2 Compute Area
    area = pow (radius, 2) * 3.14159;

    //Step 3 Display the area
    cout << "The area of the circle is " << area << endl;

    return 0;
}
