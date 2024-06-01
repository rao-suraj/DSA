#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int,int> m;
    pair<int,int> p;
    p=make_pair(1,10);
    m.insert(p);
    m.insert("asdf")=10;
    cout<<m.at(1);
    // cout<<m.at("asdf");

    // m.insert(0,1);
    // cout<<m.ar[0];
    return 0;
}



// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int a;
//     int b;
//     cin>>a;
//     cin>>b;
//     cout<<fabs(b-a);
//     return 0;
// }