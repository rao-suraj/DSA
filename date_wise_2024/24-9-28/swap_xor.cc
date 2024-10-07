// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int a = 3 ,b=1;
    
    b= a^b;
    a= a^b;
    b= a^b;
    
    cout<<a<<" "<<b;
    return 0;
}