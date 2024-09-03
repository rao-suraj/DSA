#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

        /* Tokens */
    // string str1= "Hello world";
    
//  char* cstr = new char[str1.length() + 1];  // +1 for the null terminator
//     strcpy(cstr, str1.c_str());
//     char str[] = "Suraj Rao";
    
//     char *token = strtok(cstr," ");
    
//     while(token) {
//         // cout<<token<<endl;
//         string st=token;
//         cout<<st<<endl;
        
//         token= strtok(NULL," ");
//     }
    
    
    // char ch = toupper('i');
    // cout<<ch;
    
    // string str = "Suraj";
    // transform(str.begin(),str.end(),str.begin(),::tolower);
    // cout<<str;
    
    string str = "saaa";
    
    auto it = unique(str.begin(),str.end());
    
    str.erase(it,str.end());
    
    cout<<str;
    
    return 0;
}