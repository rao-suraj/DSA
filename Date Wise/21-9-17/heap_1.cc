// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     vector<int> v1={4,1,3,2};

//     make_heap(v1.begin(),v1.end());
//     cout<<v1.front();
//     return 0;
// }


#include<iostream>

using namespace std;

int main()
{
    int *p= new int();
    *p=100;
    cout<<p<<endl<<*p<<endl;
    delete(p);
     p= new int[4];/* -->Create an array*/
    delete[]p; /*-->Used to delete the array*/
    cout<<*p<<endl;
    p=NULL;
    cout<<p;
    return 0;
}