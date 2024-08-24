#include<iostream>

using namespace std;

int main() {
    string str = "222.111.111.111";
       int dotCount = 0;
        for(int i = 0;i<str.size();i++) {
            if(str[i] == '.') {
            dotCount++;
            }            
        }
        
        if(dotCount != 3) {
            // return false;
            cout<<"false";
        }
        
        int dec = 1;
        int value = 0;
        for(int i = str.size()-1; i>= 0 ; i--) {
            if(str[i] != '.') {
                cout<<"string"<<str[i] - '0'<<endl;
                value += (str[i] - '0') * dec;
                cout<<"calVal"<<value<<endl;
                dec*=10;
            } else if(value <= 255) {
                cout<<"DOT PASSED"<<" "<<"VALUE:"<<value<<endl;
                dec = 1;
                value = 0;
            } else {
                cout<<"VALUE"<<" "<<value<<endl;
                // return false;
                cout<<"false";
            }
        }
        if(value <= 255) {
            // return true;
            cout<<"true";
        } else {
            // return false;
            cout<<"false";
        }
    return 1;
}