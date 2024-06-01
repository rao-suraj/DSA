// class Solution{
//     public:
    
//     void swap(int arr[],int a,int b)
//     {
//         int temp=arr[a];
//         arr[a]=arr[b];
//         arr[b]=temp;
//     }
    
//     int partion(int arr[],int l,int r,int k)
//     {
//         int i=l,j=r;
//         while(i<j)
//         {
//             while(arr[k]>=arr[i])
//             {
//                 i++;
//             }
//             while(arr[k]<arr[j])
//             {
//                 j--;
//             }
//             if(i<j)
//             {
//                 swap(arr,i,j);
//             }
//         }
//         swap(arr,k,j);
//         return j;
//     }
    
//     int quickSel(int arr[],int l,int r,int k)
//     {
//         int key= (rand() % (r -l + 1));
//         swap(arr,key,l);
//         int prt=partion(arr,l,r,l);
//         if(prt==k)
//         {
//             return arr[k];
//         }
//         else if(prt<k)
//         {
//             return quickSel(arr,prt+1,r,k);
//         }
//         else 
//         {
//             return quickSel(arr,l,prt-1,k);
//         }
//     }
    
//     // arr : given array
//     // l : starting index of the array i.e 0
//     // r : ending index of the array i.e size-1
//     // k : find kth smallest element and return using this function
//     int kthSmallest(int arr[], int l, int r, int k) {
//         return quickSel(arr,l,r,k-1);
//     }
// };