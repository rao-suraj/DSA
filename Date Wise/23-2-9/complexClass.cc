#include<iostream>

using namespace std;

class Complex
{
private:
    int relPart;
    int imgPart;
public:
    Complex()
    {
        relPart=0;
        imgPart=0;
    }
    Complex(int r,int i)
    {
        relPart=r;
        imgPart=i;
    }
    void Accept()
    {
        cout<<"Enter the Real and Imaginary part"<<endl;
        cin>>relPart>>imgPart;
    }
    void Display()
    {
        if(imgPart>0)
        {
            cout<<relPart<<"+"<<imgPart<<"i"<<endl;
        }
        else{
            cout<<relPart<<imgPart<<"i"<<endl;
        }
    }
    Complex operator+(Complex &c)
    {
        Complex temp;
        temp.relPart=relPart+c.relPart;
        temp.imgPart=imgPart+c.imgPart;
        return temp;
    }
    Complex operator-(Complex &c)
    {
        Complex temp;
        temp.relPart=relPart-c.relPart;
        temp.imgPart=imgPart-c.imgPart;
        return temp;
    }
    bool operator==(Complex &c)
    {
        if((relPart==c.relPart) && (imgPart==c.imgPart))
        {  
            return true;
        }else {
            return false;
        }
    }
    Complex operator++(int)
    {
        relPart++;
        imgPart++;
        return *this;
    }
    Complex operator++()
    {
        relPart=++relPart;
        imgPart=++imgPart;
        return *this;
    }
};


int main()
{
    // Complex c1;
    // c1.Display();
    Complex c2(3,2);
    // c1.Accept();
    // c1.Display();
    // c2.Display();

    Complex c3(3,2);
    // Complex c4=c2-c3;
    // c4.Display();
    // cout<<(c2==c3);

    c3++;
    c3.Display();
    ++c3;
    c3.Display();
    c3.Display();

    return 0;
}