#include <iostream>

// Forward declaration of the class
class MyClass ;

// Main function
int main() {
    MyClass obj; 
    obj.printMessage(); 

    return 0; 
}

// Class definition after main
class MyClass {
public:
    void printMessage() {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};