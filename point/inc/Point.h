#pragma once 
#include<iostream> 
using namespace std;

class Point
{
public:
	Point();
	Point(const Point&);
	Point(double,double,double);
	virtual~Point();
	//
	void Set_point_x(double);
	void Set_point_y(double);
	void Set_point_z(double);
	void Set_point_xyz(double, double, double);
	double Get_point_x() const;
	double Get_point_y() const;
	double Get_point_z() const;
	void Get_point_xyz(double &, double &, double &);
	static int GetCount();
	// 
	Point& operator=(const Point&);
	//
	void PrintInfo() const; 

private:
	static int iCount; //再好好研究一下
	double m_x{};
	double m_y{};
	double m_z{};
};

