//Design a C++ program to manage student records. Create a class Student with attributes such as name, roll number, and marks. Implement methods for displaying student details, adding new students, and calculating the average marks of all students in the record system.
#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int rollno;
    public:
    double physics,chemistry,biology,maths,english;
    Student(){}

    Student(string n,int r,double p,double c,double b,double m,double e)
    {
        name=n;
        rollno=r;
        physics=p;
        chemistry=c;
        biology=b;
        maths=m;
        english=e;

    }
    void getdata()
    {
        cout<<"Enter the details of student "<<endl;
        cout<<"Name : ";
        cin>>name;
        cout<<"Roll no. :";
        cin>>rollno;
    }
    void sbj()
    {
        cout<<"Physics marks :";
        cin>>physics;
        cout<<"Chemistry marks :";
        cin>>chemistry;
        cout<<"Biology marks :";
        cin>>biology;
        cout<<"Mathematics marks :";
        cin>>maths;
        cout<<"English marks :";
        cin>>english;
        
       
    }
    // void avravg(){
    

    ~Student() {}
    
};
int main()
{
    Student s1;
    s1.getdata();
    s1.sbj();
    // double physics,chemistry,biology,maths,english;
    int total,avg;
    double marks[5]={s1.physics,s1.chemistry,s1.biology,s1.maths,s1.english};
    total=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);
    cout<<"Total marks is "<<total<<endl;
    avg=total/5;
    cout<<"Average Marks = "<<avg<<"%"<<endl;
    // Student s1;
    // s1.getdata();
    // s1.sbj();
    
    return 0;
}