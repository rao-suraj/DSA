#include<iostream>

using namespace std;

template<class T>
T add(T val1,T val2){
    return val1 + val2;
}

int main() {
    string str1 = "suraj";
    string str2 = "rao";

    cout<<add(1,2);
    cout<<endl;
    cout<<add(1.22,3.22);
    cout<<endl;
    cout<<add(str1,str2);
    return 0;
}