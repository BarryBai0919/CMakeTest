#include "Sphere.h" 

Sphere::Sphere() :Element(SphereType)
{
	//cout << "Default constructor of Sphere object is called " << endl;
	points.resize(1);//new 1
}

Sphere::Sphere(const Sphere& s) : Element(SphereType)
{
	//cout << "Copy constructor of Sphere object is called " << endl;
	points.resize(1);//new 1
	points[0] = s.points[0];
	Set_radius(s.m_radius);
}

Sphere::Sphere(const Point& ref_0, double r) : Element(SphereType)
{
	//cout << "Constructor of Sphere object is called " << endl;
	points.resize(1);//new 1 
	points[0] = ref_0;
	Set_radius(r);
}

Sphere::~Sphere()
{
	//cout << "Destructor of Sphere object is called " << endl;
}

bool Sphere::Check_sphere(double r) const
{
	if (r <= 0.)
		return false;
	return true;
}

void Sphere::Set_ref_point(const Point& ref_0)
{
	points[0] = ref_0;
}

void Sphere::Set_radius(double r)
{
	if (Check_sphere(r))
		m_radius = r;
	else
		cout << "Invalid data radius" << endl;
}

Point Sphere::Get_ref_point() const 
{
	return points[0];
}

double Sphere::Get_radius() const
{
	return m_radius;
}

double Sphere::GetArea() const
{
	return 4.*M_PI*m_radius*m_radius;
}

double Sphere::GetVolume() const
{
	return (4. / 3.)*M_PI*m_radius*m_radius*m_radius;
}

void Sphere::PrintInfo() const
{
	cout << "Radius = " << m_radius << endl;
	Element::PrintInfo();
}