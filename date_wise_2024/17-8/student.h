#include<iostream>

using namespace std;

class student {

    public:

    student(string nameVal, int ageVal) {
        name = nameVal;
        age = ageVal;
    }

    string getName() {
        return name;
    }

    void setName(string value) {
        name = value;
    }

    private:
    string name;
    string age;
};