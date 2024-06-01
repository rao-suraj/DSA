 //Function to find the days of buying and selling stock for max profit.
    // vector<vector<int> > stockBuySell(vector<int> A, int n){
    //     // vector<vector<int>> ans;
    //     // vector<int> pair;
        
    //     // int maxDiff=0,diff=0;
    //     // int start=0;
    //     // for(int i=1;i<n;i++)
    //     // {
    //     //     diff=A[i]-A[start];
    //     //     if(diff>maxDiff)
    //     //     {
    //     //       maxDiff=diff;
    //     //     } else if(diff<maxDiff && diff>0)
    //     //     {
    //     //         pair.push_back(start);
    //     //         pair.push_back(i-1);
    //     //         ans.push_back(pair);
    //     //         pair.pop_back();
    //     //         pair.pop_back();
    //     //         start=i;
    //     //         diff=0;
    //     //     } else if(diff<0 && maxDiff!=0) {
    //     //         pair.push_back(start);
    //     //         pair.push_back(i-1);
    //     //         ans.push_back(pair);
    //     //         pair.pop_back();
    //     //         pair.pop_back();
    //     //         start=i;
    //     //         diff=0;
    //     //     } else {
    //     //         start=i;
    //     //         diff=0;
    //     //     }
    //     // }
    //     //     if(diff>0)
    //     //     {
    //     //         pair.push_back(start);
    //     //         pair.push_back(n-1);
    //     //         ans.push_back(pair);
    //     //     }
    //     // return ans;
        
    //     // Wrong Method
    //     // vector<vector<int> > s;
    //     // for(int i=0; i<n- 1; i++)
    //     //     if(A[i]<A[i+ 1])
    //     //         s.push_back({i,i+1});
                
    //     // for(auto itm: s)
    //     // {
    //     //     for(auto pair: itm)
    //     //     {
    //     //         cout<<pair<<" ";
    //     //     }
    //     //     cout<<endl;
    //     // }
    //     // return s;  \
        
    //     vector<vector<int>> ans;
    //     vector<int> pair;
    //     int startDay,endDay;
    //     bool holdingStock=false;
        
    //     for(int i=1;i<n;i++)
    //     {
    //         if(A[i]>A[i-1] && !holdingStock)
    //         {
    //             startDay=i-1;
    //             holdingStock=true;
    //         }
            
    //         if(A[i]<A[i-1] && holdingStock)
    //         {
    //             endDay=i-1;
    //             pair.push_back(startDay);
    //             pair.push_back(endDay);
    //             ans.push_back(pair);
    //             pair.pop_back();
    //             pair.pop_back();
    //             holdingStock=false;
    //         }
    //     }
        
    //     if(holdingStock)
    //     {
    //         endDay=n-1;
    //         pair.push_back(startDay);
    //         pair.push_back(endDay);
    //         ans.push_back(pair);
    //     }
    //     return ans;
    // }