#include<iostream>

using namespace std;

int main()
{
     string Ans="";
   while(A>0)
   {
       int x=A%26;
       if(x==0)
       {
           Ans='Z'+Ans;
           A=(A/26)-1;
       }
       else
       {
           Ans=char('A'+(x-1))+Ans;
           A/=26;
       }
   }
   return Ans;
    return 0;
}