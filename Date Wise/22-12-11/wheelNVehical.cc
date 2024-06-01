#include<iostream>

using namespace std;

int main()
{
    int v,w;
    cin>>v>>w;
    int l=0,h=v;
    bool ans=false;
    while(l<=h)
    {
        int mid=(l+h)/2;
        int noOfWheel=(mid*4)+((v-mid)*2);
        if(noOfWheel==w)
        {
            cout<<mid<<"  "<<v-mid<<endl;
            ans=true;
            break;
        }
        else if(noOfWheel<w)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    if(!ans)
    {
        cout<<"Invalid data";
    }
    return 0;
}