#include<iostream>
#include<regex>
using namespace std;

int main()
{
    string text="2:40-12:33",hh,mm;
    smatch result;

    regex pattern(R"((\d{1,2}):(\d{2})-(\d{2}):(\d{1,2}))");
    if(regex_search(text,result,pattern)) {
    } else {
        cout<<"Not Found";
    }
    
    for(int i=1;i<=4;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}