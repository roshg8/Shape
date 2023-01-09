#include <string>
#include <iostream>
#include "sphere.h"
#include "shape.h"
#include "point.h"
using namespace std;

Sphere::Sphere (string type, string color, Point center, double radius) 
           : Shape (type, color, center)
{
   this -> center = center;
   this -> radius = radius;
}

void Sphere::print_color (void) //print the color
{
   cout << "Color: "  << color << "\n";
}

double Sphere::compute_volume (void) //print the volume
{
   cout << "Volume: ";
   return((4 / 3) * (3.14159) * (radius * radius * radius));  
}
