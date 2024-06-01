// #include<iostream>

// using namespace std;

// int main()
// {
//     int n=;
//     int No=1;
//     int Deviser=5;
//     int count=0;
//     while(1)
//     {
//         if(No<Deviser*5)
//         {
//             if((No/Deviser)==n)
//             {
//             count++; 
//             }
//             else
//             {
//                 if((No/Deviser)>n)
//                 {
//                     break;
//                 }
//             }
//         }
//         else
//         {
//             Deviser=Deviser*5;
//         }
//         No++;
//     }
//     return count;
//     return 0;
// }


#include<iostream>

using namespace std;

 bool Cheque(int p,int n)
{
    int count=0;
    int temp=p;
    int f=5;
    while(f<=temp)
    {
        count+=temp/f;
        f=f*5;
    }
    return (count>=n);
}
int countZeroes(int n)
{
    if(n==0)
    {
        return 4; 
    }
   int lw=0;
   int hig=n*5;
   int mid;
   while(lw<hig)
   {
    // cout<<"wheli1";
    mid=(lw+hig)/2;
   if(Cheque(mid,n))
   {
       hig=mid;
   }
   else
   {
       lw=mid+1;
   }
   }
   int f=5;
//   while(lw/f>=1)
//   {
//         f=f*5;   
//   }
//   ans=0;
//       count=0;
//       while(lw<f*5)
//       {
           
//       }
//       return count;
        int count=0;
        int ans=0;
        for(int i=lw;i<lw*lw;i++)
        {
            f=5;
            count=0;
        while(f<=i)
        {
            count+=(i/f);
            f=f*5;
        }
        // cout<<count<<"  "<<i<<endl;
        if(count==n)
        {
            ans++;
        }
        else
        {
            break;
        }
        }
        return ans;
   }
int main()
{
    int n=10;
    cout<<countZeroes(n);
   return 0;
}


/*WORKING EG*/

/*
#include<iostream>

using namespace std;

int trailingZeroes(int n)
{
    if(n<0)
    {
        return 0;
    }
    int count=0;
    for(int i=5;n/i>=1;i*=5)
    {
        count+=n/i;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<trailingZeroes(n);
    return 0;
}

*/