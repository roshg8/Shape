#include <string>
#include <iostream>
#include "box.h"
#include "shape.h"
#include "point.h"
using namespace std;

Box::Box (string type, string color, string tbcolor, double length, double width, double height, Point loc) 
           : Shape (type, color, loc)
{
   this -> tbcolor = tbcolor;
   this -> loc = loc;
   this -> length = length;
   this -> width = width;
   this -> height = height;
}

void Box::print_color (void) //print both the side color AND the top and base colors
{
   cout << "Side Color: "  << color << "  Top/Base Color: " << tbcolor << "\n";
}

double Box::compute_volume (void) //print the volume of the box
{
   cout << "Volume: ";
   return (length * width * height);
}