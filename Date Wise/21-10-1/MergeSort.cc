// #include<iostream>

// using namespace std;

// void Merge(int arr[],int l,int mid,int r)
// {
//     int i=0;
//     int j=0;
//     int k=l;
//     int n1=mid-l+1;
//     int n2=r-mid;

//     int a[n1];
//     int b[n2];
//     for(int i=0;i<n1;i++)
//     {
//         a[i]=arr[l+i];
//     }
//     for(int j=0;i<n2;j++)
//     {
//         b[j]=arr[mid+1+j];
//     }
//     while(i<n1 && j<n2)
//     {
//         if(a[i]<b[j])
//         {
//             arr[k]=a[i];
//             i++;
//         }
//         else
//         {
//             arr[k]=b[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<n1)
//     {
//         arr[k]=a[i];
//         i++;
//         k++;
//     }
//     while(j<n2)
//     {
//         arr[k]=b[j];
//         j++;
//         k++;
//     }
// }

// void MergeSort(int arr[],int l,int r)
// {
//     if(l<r)
//     {
//         int mid=(l+r)/2;
//         MergeSort(arr,l,mid);
//         MergeSort(arr,mid+1,r);
//         Merge(arr,l,mid,r);
//     }
// }

// int main()
// {
//     int arr[]={2,4,1,5};
//     int l=0;
//     int r=sizeof(arr)/sizeof(arr[0])-1;
//     MergeSort(arr,l,r);
//     for(int i=0;i<=r;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }




#include<iostream>

using namespace std;

void MergeTeq(int arr[],int i,int j,int k)
{
    int a=i;
    int b=j+1;
    int ar[(k-i)+3];
    int t=i;
    while(a<=j && b<=k)
    {
        if(arr[a]<arr[b])
        {
            ar[t]=arr[a];
            a++;
        }
        else
        {
            ar[t]=arr[b];
            b++;
        }
        t++;
    }

    while(a<=j)
    {
        ar[t]=arr[a];
        t++;
        a++;
    }
    while(b<=k)
    {
        ar[t]=arr[b];
        t++;
        b++;
    }
    for(int o=i;o<=k;o++)
    {
        arr[o]=ar[o];
    }
}

void MergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        MergeTeq(arr,l,mid,r);
    }
}

int main()
{
    int arr[]={2,4,1,5,6,3};
    int l=0;
    int r=sizeof(arr)/sizeof(arr[0])-1;
    MergeSort(arr,l,r);
    for(int i=0;i<=r;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}