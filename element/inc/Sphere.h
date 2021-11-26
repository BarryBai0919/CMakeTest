#pragma once 
#define _USE_MATH_DEFINES
#include "Element.h" 
#include <cmath>
#include<iostream>
using namespace std; 

class Sphere :public Element
{
public:
	Sphere();//default constructor
	Sphere(const Sphere&);//copy constructor
	Sphere(const Point&, double);//generic constructor 
	virtual~Sphere();
	//
	//
	bool Check_sphere(double) const;
	void Set_ref_point(const Point&);
	void Set_radius(double);
	Point Get_ref_point() const;
	double Get_radius() const;
	//
	virtual double GetArea() const override; //Sphere
	virtual double GetVolume() const override;  //Sphere
	virtual void PrintInfo() const override;  //Sphere
private:
	double m_radius{ 1 };
};

