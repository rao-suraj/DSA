#include<iostream>

using namespace std;

int getNoOfDigits(int n) {
    if(n < 0 ) {
        n = abs(n);
    }
    
    int count=0;
    int divisor=10;
    int digit=1;
    
    if(n == 0) {
        return 1;
    }
    
    while(n) {
        if(n >=divisor) {
            n/=divisor;
            count +=digit;
            divisor *=divisor;
            if(digit == 1) {
                digit=2;
            } else {
                digit*=digit;
            }
        } else {
            divisor=10;
            digit=1;
            n/=divisor;
            count++;
        }
    }
    
    return count;
}

int countDigit(int n) {
    int count=0;
    while(n) {
        n/=10;
        count++;
    }
    return count;
}

int main() {
    
    return 0;
}