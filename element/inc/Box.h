#pragma once 
#include "Element.h" 
#include<iostream>
using namespace std;

class Box: public Element //derived class
{
public:
	Box();//default constructor
	Box(const Box&);//copy constructor
	Box(const Point&, double, double, double);//generic constructor 
	virtual ~Box();
	//
	//bool Check_Is_Cube(double,double,double)const;
	bool Check_Box(double, double, double) const;
	void Vertex_points();
	void Set_ref_point(const Point&);
	void Set_box_dimension(double, double, double);
	Point Get_ref_point() const;
	double Get_length() const;
	double Get_width() const;
	double Get_height() const;
	//
	virtual double GetArea() const override; //Box
	virtual double GetVolume() const override;  //Box
	virtual void PrintInfo() const override;  //Box

protected:
	double m_length{ 1. };
	double m_width{ 1. };
	double m_height{ 1. };
};

