#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>
#include "point.h"
using namespace std;

class Shape{
	protected:
		string color;
		string type;
		Point loc;
	public:
		Shape * next;
		Shape (string type, string color, Point loc);
		virtual void print_color (void){
			cout << "Color: " << color;
		}
		virtual double compute_volume (void) = 0;
		void print_type (void);
		void print_loc (void);
};
#endif