#include<iostream>

using namespace std;

class Employee{
    static int id;
    string name;
public:
    void setData();
    void getData();
    void getId(){
        cout<<id<<endl;
    }
};

int Employee :: id;

void Employee::setData(){
    cout<<"Enter the Name of the employee"<<id+1<<endl;
    cin>>name;
    id++;
}

void Employee ::getData(){
    cout<<"Name of the Employee is :"<<name<<endl;
}

int main()
{
    Employee e1;
    Employee e2;
    e1.setData();
    e1.getData();
    e1.getId();
    e2.setData();
    e2.getData();
    e2.getId();
    return 0;
}