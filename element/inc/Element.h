#pragma once  
#include "Point.h"
#include <vector>
#include<iostream> 
using namespace std;

enum ElementType { UndefinedType, BoxType, CubeType, SphereType };

class Element //Based class -> abstract class only default constructor and destructor!
{
public:
	Element();
	Element(ElementType element_type);
	virtual~Element(); // �ݭnvirtual destructor �T�O�ӧR�����R���C
	//
	vector<Point> Get_point() const; 
	ElementType Get_element_type() const; //Rvalue
	static int GetCount();
	void Print_Type() const;
	//
	virtual double GetArea() const = 0; //You don't know the shape of the element(Undefined)
	virtual double GetVolume() const  = 0; //You don't know the shape of the element(Undefined)
	virtual void PrintInfo() const; //�i�H����GetArea �M GetVolume
	
protected:
	static int iCount;
	vector<Point> points;
	ElementType m_element = UndefinedType;
};


