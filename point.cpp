#include <iostream>
#include "shape.h"
#include "point.h"
#include <string>
#include <cmath>
using namespace std;

Point::Point(){
	this -> x = 0; //set values to 0 if not given any
	this -> y = 0;
	this -> z = 0; 
}

Point::Point (double x, double y, double z){
	this -> x = x;
	this -> y = y;
	this -> z = z;
}

double Point::length(){
	double len = (sqrt (pow(x,2) + pow(y,2) + pow(z,2)));
	return (len);
}

void Point::print(void){ //print the points
	cout << "x: "  << x << " y: " << y << " z: " << z;
}