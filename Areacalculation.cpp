#include<iostream>
using namespace std;
class shape
{
protected:
    int shape_id;
    char shape_type[10];
    char unit_of_measure[10];
    float Area;
public:
    void shape_input() , shape_output() , getArea();
};
class Circle: public shape
{
private:
    float radius;
public:
    void c_input();
    void c_output();
};
class Square: public shape
{
private:
    float breadth;
public:
    void s_input() , s_output();
};
class Rectangle: public shape
{
private:
    float length, width ;
public:
    void r_input();
    void r_output();
};
int main()
{
    Circle circ;
    Square square1;
    Rectangle rec1;

    cout<<"---------------CIRCLE-----------------"<<endl;
    circ.c_input();

    cout<<"\n";
    cout<<"---------------SQUARE-----------------"<<endl;
    square1.s_input();

    cout<<"\n";
    cout<<"---------------RECTANGLE-----------------"<<endl;
    rec1.r_input();

    cout<< "\nCircle Details :\n";
    cout<<"-----------------------------------\n";
    circ.c_output();
    circ.getArea();


    cout<<"Square Details :\n";
    cout<<"-----------------------------------\n";
    square1.s_output();
    square1.getArea();

    cout<< "Rectangle Details :\n";
    cout<<"-----------------------------------\n";
    rec1.r_output();
    rec1.getArea();
    cout<<"\n\n";

    return 0;
}
void shape :: shape_input()
{
    cout<< "Enter the shape ID:  ";
    cin>>shape_id;
    cout<< "Enter the shape type:   ";
    cin>>shape_type;
    cout<< "Enter the unit of measurement:    ";
    cin>>unit_of_measure;
}
void Circle :: c_input()
{
    shape_input();
    cout<< "Enter the radius of the circle: "<<endl;
    cin>> radius;
    Area = 3.142 * radius * radius;
}
void Square :: s_input()
{
    shape_input();
    cout<< "Enter the breadth of the Square: "<<endl;
    cin>> breadth;
    Area = breadth * breadth;
}
void Rectangle :: r_input()
{
    shape_input();
    cout<< "Enter the length of the Rectangle: "<<endl;
    cin>> length;
    cout<< "Enter the width of the Rectangle: "<<endl;
    cin>> width;
    Area = 2 * ( length * width);
}
void shape::shape_output()
{
    cout<< "Shape ID =" <<shape_id<<endl;
    cout<< "The shape type is: " <<shape_type<<endl;
    cout<< "The Unit of measurement for the shape is: " <<unit_of_measure<<endl;
}
void Circle ::c_output()
{
    shape_output();
}
void Square :: s_output()
{
    shape_output();
}
void Rectangle :: r_output()
{
    shape_output();
}
void shape ::getArea()
{
    cout<< "The Area of the "<<shape_type<<" is :" <<Area<<" "<<unit_of_measure<<endl;
    cout<<"\n";
}
