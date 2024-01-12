#include<iostream>
using namespace std;
//base class
class Shape
{
    public:
    int width,hight,height,base;
    void setWidth(int w)
    {
        width=w;
    }
    void setHight(int h)
    {
        hight=h;
    }
    void setHeight(int hi)
    {
        height=hi;
    }
    void setBase(int b)
    {
        base=b;
    }

};
class Rectangle:public Shape
{
    public:
    int getArea()
    {return(width*hight);}
};
class Triangle:public Shape
{
    public:
    int getTrianglearea()
    {return(0.5*height*base);}
};
int main()
{
    int a,b;
    cout<<"Enter the width of Rectangle:-";
    cin>>a;
    cout<<"Enter the hight of Rectangle:-";
    cin>>b;
    Rectangle Rect;
    Rect.setWidth(a);
    Rect.setHight(b);
    cout<<"Total area of Rectangle:"<<Rect.getArea()<<endl; 
    int n,m;
    cout<<"Enter the hight of triangle:-";
    cin>>n;
    cout<<"Enter the base of triangle:-";
    cin>>m;
    Triangle Tri;
    Tri.setHeight(n);
    Tri.setBase(m);
    cout<<"Total area triagle:"<<Tri.getTrianglearea()<<endl;

    return 0;
}