#pragma once 
#include "Element.h" 
#include "Box.h" 
#include<iostream>
using namespace std; 

class Cube: public Box 
{
public:
	Cube();//default constructor
	Cube(const Cube&);//copy constructor
	Cube(const Point&, double);//generic constructor
	virtual~Cube();
	void Set_Cube_side(double);
	double Get_Side() const;
	//Cube is only identical dimension each side
	void Set_box_dimension(double, double, double) = delete;
	double Get_length() const = delete;
	double Get_width() const = delete;
	double Get_height() const = delete; 
	//or protected 

};

