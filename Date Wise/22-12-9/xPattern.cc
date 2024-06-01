#include<iostream>

using namespace std;

int main()
{
    char a[]="suraj";
    // printf("%t.xs\n",10,30,a);
    // printf("%1.1c",a[0]);printf("%8.1c\n",a[0]);
    // printf("%2.1c",a[1]);printf("%6.1c\n",a[1]);
    // printf("%3.1c",a[2]);printf("%4.1c\n",a[2]);
    // printf("%4.1c",a[3]);printf("%2.1c\n",a[3]);
    // printf("%5.1c\n",a[4]);
    // printf("%4.1c",a[3]);printf("%2.1c\n",a[3]);
    // printf("%3.1c",a[2]);printf("%4.1c\n",a[2]);
    // printf("%2.1c",a[1]);printf("%6.1c\n",a[1]);
    // printf("%1.1c",a[0]);printf("%8.1c\n",a[0]);

    for(int i=0;i<4;i++)
    {
        printf("%*.1c",i+1,a[i]);printf("%*.1c\n",(4*2)-(i*2),a[i]);
    }
    printf("%5.1c\n",a[4]);
    for(int i=3;i>=0;i--)
    {
        printf("%*.1c",i+1,a[i]);printf("%*.1c\n",(4*2)-(i*2),a[i]);
    }

    // printf("%*.*s",10,5,a);
    // printf("%"+20+"."+5+"s",a);
    return 0;

}