#include<iostream>
#include<regex>

using namespace std;

int main()
{
    // string sentense="Hello I will come on 2/12/2023";
    string sentense=" Hello4/2/2023";
    smatch ans;
    regex pattern(R"((\d{1,2})/(\d{1,2})/(\d{4}))");

    if(!regex_search(sentense,ans,pattern)) {
        cout<<"Not Found";
    }

    cout<<ans[1]<<"/"<<ans[2]<<"/"<<ans[3];
    return 0;
}