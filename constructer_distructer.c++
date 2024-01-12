#include<iostream>
using namespace std;
class Employee
{
    public:
    int salary;

    Employee()
    {
        cout<<"default constructer is called:-";
        salary=50000;
        cout<<salary;
        cout<<endl;
    }
    Employee(int s)
    {
        cout<<"parameterised constructer is called:-";
        salary=s;
        cout<<salary;
        cout<<endl;
    }
    Employee(Employee & obj)
    {
        cout<<"copy constructer is called:-";
        salary=obj.salary;
        cout<<salary;
        cout<<endl;
    }
    ~Employee() 
    {
        cout<<"Distructer is called";
        cout<<endl;
    }
};
int main()
{
    Employee e1,e2(60000),e3=e2;
   
}
