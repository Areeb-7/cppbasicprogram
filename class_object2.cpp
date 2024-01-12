#include<iostream>
using namespace std;
class Student
{
    private:
    string rollno;
    string name;
    public:
    void setdata()
    {
        cout<<"Enter the roll no:-";
        {
            getline(cin,rollno);
        }
        cout<<"Emter the name:-";
        {
            getline(cin,name);
        }
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
    s1.setdata();
    s1.getdata();
    s2.setdata();
    s2.getdata();
  
    return 0;
}
