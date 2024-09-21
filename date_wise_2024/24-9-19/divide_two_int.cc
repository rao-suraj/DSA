
//  check bitwise swap operation.

#include<iostream>

using namespace std;

   int divide(int dividend, int divisor) {
        int quotient=0; bool isNeg;
        if(dividend == 0) {
            return 0;
        }
        if(dividend > 0 && divisor > 0) {
            isNeg =false;
        } else if(dividend < 0 && divisor < 0) {
            isNeg = false;
        } else {
            isNeg = true;
        }
        int div = abs(-2147483648);
        int dvs = abs(divisor);

        cout<<"DIV"<<div<<endl;
        cout<<"DVS"<<dvs<<endl;

        if(dvs > div ){
            return 0;
        }
        
        if(dvs == 1) {
            cout<<div;
            quotient = div;
        } else {
            while(div >= dvs) {
            div -= dvs;
            quotient++;
            }
        }

        if(isNeg) {
            quotient *=-1;
        }
        return quotient;
    }

int main()
{
    cout<<divide(-2147483648,-1);
    return 0;
}

/*
    public class Solution {
    public int Divide(int dividend, int divisor) {
        // Handle edge cases
        if (dividend == int.MinValue && divisor == -1)
            return int.MaxValue;
        
        // Get the signs of the result
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert both numbers to positive values
        long absDividend = Math.Abs((long)dividend);
        long absDivisor = Math.Abs((long)divisor);
        
        int result = 0;
        
        // Shift divisor left until it's larger than the dividend
        while (absDividend >= absDivisor) {
            long temp = absDivisor, multiple = 1;
            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            absDividend -= temp;
            result += (int)multiple;
        }
        
        // Apply the sign
        return negative ? -result : result;
    }
}
*/