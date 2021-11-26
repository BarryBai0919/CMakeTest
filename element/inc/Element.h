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
	virtual~Element(); // 需要virtual destructor 確保該刪的都刪掉。
	//
	vector<Point> Get_point() const; 
	ElementType Get_element_type() const; //Rvalue
	static int GetCount();
	void Print_Type() const;
	//
	virtual double GetArea() const = 0; //You don't know the shape of the element(Undefined)
	virtual double GetVolume() const  = 0; //You don't know the shape of the element(Undefined)
	virtual void PrintInfo() const; //可以先給GetArea 和 GetVolume
	
protected:
	static int iCount;
	vector<Point> points;
	ElementType m_element = UndefinedType;
};


