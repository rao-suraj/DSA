// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> getDivisorCount(int n) {
    vector<int> ans={};
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            ans.push_back(i);
        }
    } 
    return ans;
}

vector<int> getDivisorCount2(int n) {
    vector<int> ans;
    
    for(int i=1;i<=sqrt(n);i++) {
        if(n%i == 0) {
            ans.push_back(i);
            if(n/i != i) {
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}

int main() {
    int n=12;
    
    vector<int> ans;
    ans = getDivisorCount2(n);
    
    for(auto it: ans) {
        cout<<it<<" ";
    }
    
    return 0;
}