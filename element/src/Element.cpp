#include"Element.h"
using namespace std;
int Element::iCount{}; //initialized iCount (Element)

Element::Element()
{
	//cout << "Default constructor of Element object is called " << endl;
	m_element = UndefinedType;
	iCount++;
}

Element::Element(ElementType element_type)
{
	//cout << "Constructor of Element object is called " << endl;
	m_element = element_type;
	iCount++;
}

Element::~Element()
{
	//cout << "Destructor of Element object is called " << endl;
	iCount--;
}

vector<Point> Element::Get_point() const
{
	return points;
}

ElementType Element::Get_element_type() const
{
	return m_element;
} 

int Element::GetCount()
{
	return iCount;
}

void Element::Print_Type() const
{
	switch (m_element)
	{
	case UndefinedType:
		cout << "UndefinedType: " << endl;
		break;
	case BoxType:
		cout << "BoxType: " << endl;
		break;
	case CubeType:
		cout << "CubeType: " << endl;
		break;
	case SphereType:
		cout << "SphereType: " << endl;
		break;
	default:
		cout << "UndefinedType: " << endl;
		break;
	}
}

void Element::PrintInfo() const
{
	this->Print_Type();
	cout << "Area =  " <<GetArea() << endl;
	cout << "Volume = " << GetVolume() << endl;
	cout << "Reference point = "; points[0].PrintInfo();
	if (points.size() > 1)
	{
		cout << "Vertex: " << endl;
		for (int i = 1; i < points.size(); ++i) { cout << "Vertex[" << i + 1 << "] = "; points[i].PrintInfo(); }
	}
}