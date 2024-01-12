//write a program to calculate eligibility of student.
#include<iostream>
using namespace std;
class Student
{
    public:
    int marks;
    void setmarks(int m)
    {
        marks=m;
    }
};
class Student1:public Student
{
    public:
    
    void eligible()
    {
        if (marks<150)
        {
            cout<<"you are not eligible\n";

        }
        else
        {
            cout<<"you are eligible\n";
        }
    }
};
int main()
{
    int phy,chem,bio,total;
    cout << "Enter your physics marks : ";
    cin >> phy;
    cout << "Enter your chemistry marks : ";
    cin>>chem;
    cout<<"Enter your biology marks : ";
    cin>>bio;
    total = phy + chem + bio;
    cout<<"your total marks : "<<total<<endl;
    Student1 s1;
    s1.setmarks(total);
    s1.eligible();

    return 0;
}
