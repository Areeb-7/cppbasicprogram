#include<iostream>
using namespace std;
class Student
{
    private:
    int rollno;
    string name;
    public:
    void setdata(int r,string n)
    {
        rollno = r;
        name = n;
    }
    void getdata()
    {
        cout<<rollno<<endl;
        cout<<name<<endl;
    }
};
int main()
{
    Student s1,s2;
    s1.setdata(1,"abc");
    s1.getdata();
    s2.setdata(2,"xyz");
    s2.getdata();
    return 0;
}
