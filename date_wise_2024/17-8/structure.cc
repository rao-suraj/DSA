#include<iostream>

using namespace std;


struct student {
    string name;
    int age;
};

typedef struct student sdut;

int main() {

    sdut s1;
    s1.name = "Suraj";
    s1.age = 22;

    cout<<s1.name;
    return 1;
}