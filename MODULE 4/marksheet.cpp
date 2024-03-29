// Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;  //library file

class student  //class
{
public:
    int roll_no, age, sub1, sub2, sub3, total;  //varible
    float per;
    string name;

    int get_data()  //function
    {
        cout << "Enter Roll No : ";
        cin >> roll_no;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
    }
};

class detail : public student  //function
{
public:
    int get_detail()
    {
        cout << "Enter Marks of subject 1 : ";
        cin >> sub1;
        cout << "Enter marks of subject 2 : ";
        cin >> sub2;
        cout << "Enter marks of subject 3 : ";
        cin >> sub3;
    }
};

class marksheet : public student
{
public:  //function
    int mark_calc()
    {
        total = sub1 + sub2 + sub3;
        per = total / 300;
    }
   //function
    int print_marksheet()
    {
        cout << endl
             << "Roll No. : " << roll_no;
        cout << endl
             << "Name : " << name;
        cout << endl
             << "Age : " << age;
        cout << endl
             << "Mark of subject 1 : " << sub1;
        cout << endl
             << "Mark of subject 2 : " << sub2;
        cout << endl
             << "Mark of subject 2 : " << sub3;
        cout << endl
             << "Total : " << total;
        cout << endl
             << "Percentage : " << per;
    }
};

int main()
{
    detail d; //object
    d.get_data();
    d.get_detail();
    marksheet mark;  //object
    mark.mark_calc();
    mark.print_marksheet();
    return 0;
}
