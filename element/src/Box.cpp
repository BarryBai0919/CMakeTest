#include "Box.h" 
#include "Cube.h"  
Box::Box():Element(BoxType)
{
	//cout << "Default constructor of Box object is called " << endl;
	points.resize(8);//new 8
	Vertex_points();
}

Box::Box(const Box& b):Element(BoxType)
{
	//cout << "Copy constructor of Box object is called " << endl;
	points.resize(8);//new 8
	points[0] = b.points[0];
	Set_box_dimension(b.m_length, b.m_width, b.m_height);
}

Box::Box(const Point& ref_0, double l, double w, double h):Element(BoxType)
{
	//cout << "Constructor of Box object is called " << endl;
	points.resize(8);//new 8
	points[0] = ref_0;
	Set_box_dimension(l, w, h);
}

Box::~Box()
{
	//cout << "Destructor of Box object is called " << endl;
}

//bool Box::Check_Is_Cube(double l, double w, double h)const
//{
//	if (l == w && l == h) //A==B A==C then C==B
//		return true;
//	else
//		return false;
//}

bool Box::Check_Box(double l, double w, double h) const
{
	if (l <= 0. || w <= 0. || h <= 0.)
		return false; 
	return true;
}

void Box::Vertex_points()
{
	double temp_x{}, temp_y{}, temp_z{};
	for (int i = 1; i < 8; ++i) //0¬Om_ref
	{
		temp_x = points[0].Get_point_x() + static_cast<double>((i == 1 || i == 2 || i == 5 || i == 6) ? 1. : 0.)*m_length;
		temp_y = points[0].Get_point_y() + static_cast<double>((i == 2 || i == 3 || i == 7 || i == 6) ? 1. : 0.)*m_width;
		temp_z = points[0].Get_point_z() + static_cast<double>((i == 4 || i == 5 || i == 6 || i == 7) ? 1. : 0.)*m_height;
		Point temp_point(temp_x,temp_y,temp_z);
		points.at(i) = temp_point; //point[i]==point.at(i) ¡A¦ýat¦³exception error
	}
}

void Box::Set_ref_point(const Point& ref_0)
{
	points[0] = ref_0;
}

void Box::Set_box_dimension(double l, double w, double h)
{
	if (Check_Box(l, w, h))
	{
		//if (Check_Is_Cube(l, w, h))
		//	m_element = CubeType;
		m_length = l;
		m_width = w;
		m_height = h;
		Vertex_points();
	}
	else
		cout << "Invalid data" << endl;
}

Point Box::Get_ref_point() const
{
	return points[0];
}

double Box::Get_length() const
{
	return m_length;
}

double Box::Get_width() const
{
	return m_width;
}

double Box::Get_height() const
{
	return m_height;
}

double Box::GetArea() const
{
	return 2 * (m_length*m_width + m_length*m_height + m_width*m_height);
}

double Box::GetVolume() const 
{
	return m_length*m_width*m_height;
} 

void Box::PrintInfo() const
{
	cout << "Length = " << m_length << ", Width = " << m_width << ", height = " << m_height << endl;
	Element::PrintInfo();
	//cout << "Vertex: " << endl;
	//for (int i = 0; i < 8; ++i){cout << "Vertex[" << i + 1 << "] = "; points[i].PrintInfo();}
}