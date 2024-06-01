// //User function template for C++

// void getPermuntation(string str) {
    
// }

// long long factorial(long long n) {
//     return (n==1 || n==0) ? 1: n*factorial(n-1);
// }

// class Solution{
//   public:
//     long long findRank(string str) {
//         long long lessCount,noOfEle,tot=1,n=str.size();
//         for(int i=0;i<n;i++) {
//             lessCount=0;
//             for(int j=i+1;j<n;j++) {
//                 if(str[i] > str[j]) {
//                     lessCount++;
//                 }
//             }
//             noOfEle=n-i-1;
//             tot+=lessCount * factorial(noOfEle);
//         }
//         return tot;
//     }
// };

