#include <iostream>
#include "student.h"
using namespace std;

void doNothing();

int main() {
    string name = "Suraj";
    student s1 = student("Suraj",22);

    doNothing();

    cout<<s1.getName();
    return 1;
}

void doNothing() {
    
}

