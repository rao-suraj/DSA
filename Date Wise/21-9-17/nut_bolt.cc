// #include<iostream>

// using namespace std;

// void matchPairs(char nuts[], char bolts[], int n) {
//     char com[]={ '!','#','$','%','&','*','@','^','~'};
//     int index1=0;
//     int index2=0;
//     for(int i=0;i<9;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(com[i]==nuts[j])
//             {
//                 char temp=nuts[j];
//                 nuts[j]=nuts[index1];
//                 nuts[index1]=temp;
//                 index1++;
//             }
//             if(com[i]==bolts[j])
//             {
//                 char tempp=bolts[j];
//                 bolts[j]=bolts[index2];
//                 bolts[index2]=tempp;
//                 index2++;
//             }
//         }
//     }
// }
// int main()
// {
//     char nuts[]={'@', '%', '$', '#', '^'};
//     char bolts[]={'%', '@', '#', '$' ,'^'};
//     int n=sizeof(nuts)/sizeof(nuts[0]);
//     matchPairs(nuts,bolts,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<nuts[i];
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<bolts[i];
//     }
//     return 0;
// }

#include<iostream>

using namespace std;

int Pivot(char arr[],int low,int high,int piv)
{
    char temp;
    int i=low, j=high;
    char pivot=arr[piv];
    while(i<j)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[j];
    arr[j]=arr[piv];
    arr[piv]=temp;
    return j;
}

void matchPairs(char nuts[],char bolts[],int n,int low,int high)
{
    if(low<high)
    {
        int piv=Pivot(nuts,low,high,low);
        for(int i=0;i<n;i++)
        {
            if(bolts[i]==nuts[piv])
            {
                Pivot(bolts,low,high,i);
                break;
            }
        }
        matchPairs(nuts,bolts,n,low,piv-1);
        matchPairs(nuts,bolts,n,piv+1,high);
    }
}

int main()
{
    char nuts[]={'&','$','^','~','@','#','%','*'};
    char bolts[]={'^','$','%','@','&','~','#' ,'*'};
    int n=sizeof(nuts)/sizeof(nuts[0]);
    matchPairs(nuts,bolts,n,0,n-1);
    // cout<<"    GOooo";
    for(int i=0;i<n;i++)
    {
        cout<<nuts[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<bolts[i];
    }
    return 0;
}