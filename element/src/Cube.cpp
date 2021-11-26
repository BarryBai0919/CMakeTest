#include "Cube.h"  

Cube::Cube():Box()
{
	//cout << "Default constructor of Cube object is called " << endl;
	m_element = CubeType; //Note set_box_dimension is not in default constructor, m_element should be modified.
}

Cube::Cube(const Cube& c):Box(c)
{
	//cout << "Copy constructor of Cube object is called " << endl;
	m_element = CubeType;
}

Cube::Cube(const Point& ref_0, double side):Box( ref_0, side, side, side )
{
	//cout << "Constructor of Box object is called " << endl;
	m_element = CubeType;
}

Cube::~Cube()
{
	//cout << "Destructor of Box object is called " << endl;
}

void Cube::Set_Cube_side(double side)
{
	Box::Set_box_dimension(side,side,side);
}

double Cube::Get_Side() const
{
	return m_length;
}


