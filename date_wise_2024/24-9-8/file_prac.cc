#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

  // ofstream MyFile("text.txt");

  // MyFile<<"Hello Suraj";

  ifstream MyFile("text.txt");
  char c;

  // while(MyFile.get(c)){
  //   cout<<c;
  // }

  string str;

  while(getline(MyFile,str)) {
    cout<<str;
  }
  
  return 0;
}