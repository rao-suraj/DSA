// #include<iostream>

// using namespace std;

//  int findCandidate(int a[], int size) 
//     { 
//         int maj_index = 0, count = 1; 
        
//         // use linear search to compute candidate for majority element
//         for (int i = 1; i < size; i++) 
//         { 
//             if (a[maj_index] == a[i]) 
//                 count++; 
//             else
//                 count--; 
//             if (count == 0) 
//             { 
//                 maj_index = i; 
//                 count = 1; 
//             } 
//         } 
//         return a[maj_index]; 
//     }
// int main()
// {
//     int arr[]={1,5,4,4,5,1};
//     cout<<findCandidate(arr,6);
//     return 0;
// }

        sort(a,a+size);
        int i=0,j=0,ct=0;
        int maxCt=INT_MIN;
        int ans=a[0];
        while(j<size)
        {
            if(a[j]==a[i])
            {
                ct++;
                if(maxCt<=ct)
                {
                    maxCt=ct;
                    ans=a[i];
                }
                j++;
            }
            else
            {
                ct=1;
                i=j;
                j++;
            }
        }
        if(maxCt>size/2)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }