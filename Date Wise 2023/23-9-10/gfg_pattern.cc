#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    /* Left Triangle Star Pattern*/
    // char ch='A'+ 32; //  A = 65 a=97 ---> +32
    // cout<<ch;

    /* Print char in same way*/
    char ch;
    // for(int i=1;i<=n;i++)
    // {
    //     ch='A' ;
    //     for(int j=1;j<=i;j++)
    //     {
    //        cout<<ch;
    //         ch=ch + 1;
    //     }
    //     cout<<endl;
    // }

    /* Right Triangle Star Pattern*/
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         if(j<i)
    //         {
    //             cout<<"  ";
    //         } else {
    //             cout<<" *";
    //         }
    //     }
    //     cout<<endl;
    // }

    /* Center Triangle Star Pattern*/
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         if(j<i)
    //         {
    //             cout<<" ";
    //         } else {
    //             cout<<" *";
    //         }
    //     }
    //     cout<<endl;
    // }

    /* Right Tringle GFG Method */
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<(n-i)-1;j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    /* Full Pyramid*/
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<2*(n-i)-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<2*i+1;j++)
    //     {
    //         cout<<" *";
    //     } 
    //     cout<<endl;
    // }

/* Inverted Right Half Pyramid Pattern in C*/
    // for(int i=n;i>0;i--)
    // {
    //     for(int j=0;j<i;j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    /* Inverted Left Half Pyramid Pattern in C*/
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<i;j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int k=0;k<n-i;k++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

/* Inverted Full Pyramid Pattern in C*/
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<i;j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int k=0;k<2*(n-i)-1;k++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /*  Rhombus Pattern in C */
    // for(int i=n-1;i>=0;i--)
    // {
    //     for(int j=0;j<i;j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int k=0;k<n;k++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}