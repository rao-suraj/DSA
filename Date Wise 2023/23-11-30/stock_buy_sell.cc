// Best Time to Buy and Sell Stock
    // int maxProfit(vector<int>& prices) {
    //     int maxProf=0;
    //     for(int i=0;i<prices.size();i++) {
    //         for(int j=i+1;j<prices.size();j++) {
    //             int prof=prices[j]-prices[i];
    //             maxProf=max(maxProf,prof);
    //         }
    //     }
    //     return maxProf;
    // }

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int lsf =INT_MAX; 
//         int op = 0; 
//         int pist = 0; 
        
//         for(int i = 0; i < prices.size(); i++){
//             if(prices[i] < lsf){ 
//                 lsf = prices[i]; 
//             }
//             pist = prices[i] - lsf;
//             if(op < pist){
//                 op = pist;
//             }
//         }
//         return op;
//     }
// };

