#include <string>
#include <iostream>
#include "cone.h"
#include "shape.h"
#include "point.h"
using namespace std;

Cone::Cone (string type, string color, string bcolor, Point center, Point apex, double radius) 
           : Shape (type, color, center)
{
   this -> bcolor = bcolor; //basecolor
   this -> center = center;
   this -> apex = apex;
   this -> radius = radius;
}

void Cone::print_color (void) //print both just the color AND the base color
{
   cout << "Color: "  << color << "  Base Color: " << bcolor << "\n";
}

double Cone::compute_volume (void) //print the volume of the cone
{
   Point diff;
   double h;
   diff = apex - center;
   h = diff.length ();
   cout << "Volume: ";
   return (3.14159 * radius * radius * radius * h / 3);
}