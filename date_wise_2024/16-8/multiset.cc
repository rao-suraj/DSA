#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main() {

    multiset<int> mltst;
    // set<int>

    mltst.insert(10);
    mltst.insert(12);
    mltst.insert(14);
    mltst.insert(14);
    mltst.insert(15);
    mltst.insert(15);
    mltst.insert(16);

    multiset<int> :: iterator it;

    for(auto itr = mltst.begin(); itr!= mltst.end();itr++) {
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<*mltst.find(10);
    cout<<endl;
    cout<<*mltst.upper_bound(13);

    return 0;
}