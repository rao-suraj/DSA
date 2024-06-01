#include<iostream>
#include<cmath>

using namespace std;

class SimpleCalculator{
    int num1,num2;
    char op;
    public:
    void Display();
    void setValue(char c[])
    {
        num1=c[0]-'0';
        op=c[1];
        num2=c[2]-'0';
    }

    int getValue()
    {
        switch (op)
        {
        case '+':
            return num1+num2;
        case '-':
            return num1-num2;
        case '*':
            return num1*num2;
        case '/':
            return num1/num2;
        default:
            return 0;
        }
    }
};

void SimpleCalculator :: Display(){
    cout<<op;
}

class ScientificCalculator{
    int ang;
    public:
        void setValue(char c[])
        {
            ang=((c[3]-'0')*10)+c[4]-'0';
        }

        float getValue(char c)
        {
            cout<<ang<<endl;
            return tan(ang);
            if(c =='t')
                return tan(ang);
            else if(c=='s')
                return sin(ang);
            else 
                return cos(ang);
        }
};

int main()
{ 
    char c[5];
    cout<<"Enter the calculation you want to do "<<endl;
    cin>>c;
    SimpleCalculator sc;
    ScientificCalculator ssc;
    if(c[1]=='+' | c[1]=='-' | c[1]=='*' | c[1]=='/' ){
        sc.setValue(c);
        cout<<sc.getValue();
    }
    else {
        ssc.setValue(c);
        cout<<ssc.getValue(c[0]);
        }
    return 0;
}