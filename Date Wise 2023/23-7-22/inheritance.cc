#include<iostream>

using namespace std;

class Employee{
    public:
    int id;
    float salary;
    public :
    Employee (int id, float sal)
    {
        this->id=id;
        salary=sal;
    }
    Employee(){
        
    }
}; 

class Programmer : public Employee{
    int languageId;
    public:
    Programmer(int lag)
    {
        languageId=lag;
    }
};

int main()
{
    Programmer p1(3);
    p1.id;
    return 0;
}