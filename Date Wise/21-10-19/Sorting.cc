
/*SELECTION SORT*/

// #include<iostream>

// using namespace std;

// void Swap(int arr[],int i,int j)
// {
//     int temp;
//     temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }

// int main()
// {
//     int arr[]={4,3,2,6,5,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int min;
//     for(int i=0;i<n-1;i++)
//     {
//         min=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[min])
//             {
//                 min=j;
//             }
//         }
//         Swap(arr,i,min);
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
//     return 0;
// }


// BUBBLE SORT


// #include<iostream>

// using namespace std;

// void Swap(int arr[],int i,int j)
// {
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp; 
// }

// int main()
// {
//     int arr[]={4,3,2,6,5,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=n-2;i>=0;i--)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 Swap(arr,j,j+1);
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
//     return 0;
// }

