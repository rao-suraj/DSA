#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
       // Write C++ code here
    string str= "Suraj";
    
    // cout<<str.insert(2,"U")<<endl;
    // cout<<str.erase(2,2);
    
    
    // str+=" Rao";
    // str.append(" Nagesh");
    // cout<<str;
    // cout<<endl;
    
    // string str2 = str.substr(2,3);
    
    
    // cout<<str2;
    // cout<<endl;
    
    // // A = 65
    // // a = 97
    
    // cout<<str.compare("Suraj Rao")<<endl;
    // cout<<str.compare(2,3,str2); // (pos,num,str) a lexalogical orde
    
    
    // string str= "Suraj Rao";
    // // size_t pos = str.find("z");
    
    // /*
    // string,
    // (string, pos)
    // */
    // size_t pos = str.find("u",0); 
    // if(pos != string::npos) {
    //     cout<<"true";
    // } else {
    //     cout<<"false";
    // }
    // str.replace(0,1,"R");
    // cout<<str;
    // cout<<endl;
    
    
    // for(auto it: str) {
    //     cout<<it;
    // }
    
    // cout<<endl;
    
    // cout<<stoi("123")<<endl;
    // cout<<stol("11")<<endl;
    // cout<<stod("22")<<endl;
    // cout<<stof("22")<<endl;
    
    // cout<<to_string(1233);
    
    
    reverse(str.begin(),str.end());
    cout<<str;
    
    
    return 0;
}