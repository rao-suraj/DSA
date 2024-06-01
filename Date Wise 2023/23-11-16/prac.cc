#include<iostream>

using namespace std;

int main()
{
    string ans;
    cout<<"Enter you Name here"<<endl;
    cin>>ans;

    for(int i=0;i<ans.size();i++) {
       if(islower(ans[i])) {
            cout<<ans[i];
       }
    }
    return 0;
}