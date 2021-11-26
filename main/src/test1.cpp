#include<iostream>
#include<string>
#include<algorithm>
#include"test1_config.h"
#include"Element.h"
#include"Box.h"
#include"Cube.h"
#include"Sphere.h" 
using namespace std; 

int main(int argc, char *argv[]){
    if (argc < 2) {
        //report version
        string version = argv[0];
        version.erase(remove_if (version.begin(), version.end(), static_cast<int(*)(int)>(&ispunct)),version.end());
        cout << "The version of " << version <<" is "
            << Test1_VERSION_MAJOR << "."
            << Test1_VERSION_MINOR << endl;
    }
    
    //test 1
	Point point(-1, -1, -1);
	Element *element{ new Box(point, 1, 2, 3) };
	element->PrintInfo();
	cout << "Number of point's constructor be called = " << point.GetCount() << endl;
	cout << "Number of Box's constructor be called = " << element->GetCount() << endl;
	cout << endl;
	delete element;
	//test 2
	element=new Sphere(point, 10);
	element->PrintInfo();
	cout << "Number of point's constructor be called = " << point.GetCount() << endl;
	cout << "Number of Sphere's constructor be called = " << element->GetCount() << endl; 
	cout << endl;
	delete element;
	//test 3
	element = new Cube(point, 20);
	element->PrintInfo();
	cout << "Number of point's constructor be called = " << point.GetCount() << endl;
	cout << "Number of Cube's constructor be called = " << element->GetCount() << endl;
	cout << endl;
	delete element;
	//test 4
	Box box;
	box.Set_ref_point(point);
	box.Set_box_dimension(1, 2, 3);
	box.PrintInfo();
	cout << "Number of point's constructor be called = " << point.GetCount() << endl;
	cout << "Number of Box's constructor be called = " << element->GetCount() << endl;
	cout << endl;
	//test 5 
	Cube cube;
	cube.Set_ref_point(point);
	cube.Set_Cube_side(20);
	cube.PrintInfo();
	cout << "Number of point's constructor be called = " << point.GetCount() << endl;
	cout << "Number of Box's constructor be called = " << element->GetCount() << endl;
	cout << endl;
	//test 6 
	Box geometry(point,20,20,20);
	geometry.PrintInfo();
	cout << "Number of point's constructor be called = " << point.GetCount() << endl;
	cout << "Number of Box's constructor be called = " << element->GetCount() << endl;
	cout << endl;
	//test 7
	Cube copycube(cube);
	copycube.PrintInfo();
	cout << "Number of point's constructor be called = " << point.GetCount() << endl;
	cout << "Number of Box's constructor be called = " << element->GetCount() << endl;
	cout << endl;
    
    return 0;
};