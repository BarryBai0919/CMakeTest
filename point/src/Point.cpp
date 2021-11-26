#include "Point.h"

int Point::iCount{}; //initialized iCount (Point)

Point::Point()
{
	//cout << "Default constructor of Point object is called " << endl; 
	iCount++;
}

Point::Point(const Point& p)
{
	//cout << "Copy constructor of Point object is called " << endl;
	this->m_x = p.m_x;
	this->m_y = p.m_y;
	this->m_z = p.m_z;
	iCount++;
}

Point::Point(double x, double y, double z)
{
	//cout << "Constructor of Point object is called " << endl;
	m_x = x; m_y = y; m_z = z;
	iCount++;
}

Point::~Point()
{
	//cout << "Destructor of Point object is called " << endl;
	iCount--;
}

void Point::Set_point_x(double x)
{
	m_x = x;
}

void Point::Set_point_y(double y)
{
	m_y = y;
}

void Point::Set_point_z(double z)
{
	m_z = z;
}

void Point::Set_point_xyz(double x, double y, double z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}


double Point::Get_point_x() const
{
	return m_x;
}

double Point::Get_point_y() const
{
	return m_y;
}

double Point::Get_point_z() const
{
	return m_z;
}

void Point::Get_point_xyz(double &x, double &y, double &z)
{
	x = m_x;
	y = m_y;
    z = m_z;
}

Point& Point::operator=(const Point& p)
{
	if (this != &p)
	{
		this->m_x = p.m_x;
		this->m_y = p.m_y;
		this->m_z = p.m_z;
	}
	return *this;
}

void Point::PrintInfo() const 
{
	cout << "(" << m_x << " , " << m_y << " , " << m_z << ")" << endl;
}

int Point::GetCount()
{
	return iCount;
}
