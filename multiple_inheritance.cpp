#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    void getx()
    {
        cout<<"Enter the value of x:-";
        cin>>x;
    }
};
class B
{
    public:
    int y;
    void gety()
    {
        cout<<"Enter the value of y:-";
        cin>>y;
    }
};
class C:public A,public B
{
    public:
    void sum()
    {
        cout<<endl<<"The Sum is:"<<x+y;
    }
};
int main()
{
    C c1;
    c1.getx();
    c1.gety();
    c1.sum();
    return 0;

}
