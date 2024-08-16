#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec= {6,2,3,4,5};

    vector<int> :: iterator it;

    it = vec.begin();

    // cout<<*it<<endl;

    // print all the values
    // for(auto it = vec.begin(); it >= vec.end();it=it+2) {
    //     cout<<*it<<" ";
    // }

    /* Find metod example */

    // it = find(vec.begin(),vec.end(),99);

    // if(it != vec.end()) {
    //     cout<<"Element found at"<<distance(vec.begin(),it);
    // } else {
    //     cout<<"ELEMENT NOT FOUND";
    // }


    /* reverse iterator */
    // vector<int> ::reverse_iterator rit;
    // rit = vec.rbegin();
    // cout<<*rit<<endl;
    // rit++;
    // cout<<*rit;

    /* Pointer */

    // int i = 10;
    // int *p;
    //  p = &i;

    // cout<<p<<" "<<*p<<endl;

    return 0;
}