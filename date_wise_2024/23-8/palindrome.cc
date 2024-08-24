#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // string str= "aaccbb";
    // int largest = 0;
    // int start;
    // int end;
    // for(int i = 0; i < str.length(); i++) {
    //     for(int j = i ;j< str.length(); j++) {
    //         string ans = str.substr(i,j-i+1);
    //         string rev = str.substr(i,j-i+1);
    //         reverse(rev.begin(),rev.end());
    //         if(ans.compare(rev) == 0){
    //             if(ans.length() > largest) {
    //                 largest = ans.length();
    //                 start = i;
    //                 end = j;
    //             }
    //         }
    //     }
    // }

    // for(int i = start ;i <= end ; i++) {
    //     cout<<str[i];
    // }

    int largets = INT_MIN;
    string str = "suraj";
    if (str.length() > largets) {
        cout << "large";
    }
    return 0;
}