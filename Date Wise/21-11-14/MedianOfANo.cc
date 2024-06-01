#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void insert(int arr[],)

int main()
{
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>> Queue1;
    priority_queue<int,vector<int>,greater<int>> Queue2;
    Queue1.push(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(((i+1)%2)!=0)
        {
            if(arr[i]>Queue2.top())
            {
                Queue1.push(Queue2.top());
                Queue2.pop();
                Queue2.push(arr[i]);
            }
            else
            {
                Queue1.push(arr[i]);
            }
        }
        else
        {
            if(arr[i]>Queue1.top())
            {
                Queue2.push(arr[i]);
            }
            else
            {
                Queue2.push(Queue1.top());
                Queue1.pop();
                Queue1.push(arr[i]);
            }
        }
    }
    if((n%2)==0)
    {
        cout<<((Queue1.top()+Queue2.top())/2);
    }
    else
    {
        cout<<Queue1.top();
    }
    return 0;
}