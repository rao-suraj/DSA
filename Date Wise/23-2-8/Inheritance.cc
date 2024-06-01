#include<iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date()
    {
        day=0;
        month=0;
        year=0;
    }
    Date(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }
    void Display()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class Employee
{
    private:
    int empId;
    string empName;
    Date dob;
    public:
    Employee();
    Employee(int eId,string eName,int d,int m,int y);
    void Display();
};

Employee::Employee()
{
    empId=0;
    empName="NULL";
}

Employee::Employee(int eId,string eName,int d,int m,int y):dob(d,m,y)
{
    empId=eId;
    empName=eName;
}

void Employee::Display()
{
    cout<<"Employee ID="<<empId<<endl;
    cout<<"Employee Name="<<empName<<endl;
    dob.Display();
}

 
// class WageEmployee:public Employee
// {
// private:
//     int hours;
//     int salary;
// public:
//     WageEmployee()
//     {
//         hours=0;
//         salary=0;
//     }
//     WageEmployee(int eID,string eName,int h,int s):Employee(eID,eName)
//     {
//         hours=h;
//         salary=s;
//     }
//     void Display()
//     {
//         Employee::Display();
//         cout<<"Hours="<<hours<<endl;
//         cout<<"Salary="<<salary<<endl;
//     }
// };









int main()
{
    Employee e1;
    e1.Display();
    cout<<endl;
    Employee e2(1,"Suraj",1,2,2002);
    e2.Display();

    // WageEmployee we1;
    // we1.Display();

    // WageEmployee we2(1,"Suraj",2,200);
    // we2.Display();
    return 0;
}