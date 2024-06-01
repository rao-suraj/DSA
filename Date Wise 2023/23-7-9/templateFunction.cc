#include<iostream>

using namespace std;

template<class T>
T avg(T a,T b)
{
    T avg=(a+b)/2.0;
    return avg;
}

int main()
{
    float ans=avg<float>(5.3,0.2);
    printf("Average of these nuberes is %f",ans);
    return 0;
}