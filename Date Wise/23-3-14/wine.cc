//  long long int n=arr.size();
//       if(n==0)
//       {
//           return 0;
//       }
//       vector<pair<int,int>> cell;
//       vector<pair<int,int>> buy;
//       for(int i=0;i<n;i++)
//       {
//           if(arr[i]>0)
//           {
//               cell.push_back({arr[i],i});
//           }else
//           {
//               buy.push_back({arr[i],i});
//           }
//       }
      
//       long long int i=0,j=0;
//       pair<int ,int> p1;
//       pair<int ,int> p2;
//       long long int ans=0;
//       while(i<cell.size() && j<buy.size())
//       {
//         p1=cell[i];
//         p2=buy[j];
//         int diff=p1.first + p2.first;    
//         if(diff==0)
//         {
//             p1.first=p2.first=0;
//             ans+=(abs(p1.second-p2.second)*(p2.first-buy[j].first));
//             cell[i]=p1;
//             buy[j]=p2;
//             i++;
//             j++;
//         }
//         else if(diff>0)
//         {
//             p1.first=diff; 
//             p2.first=0;
//             ans+=(abs(p1.second-p2.second)*(p2.first-buy[j].first));
//             cell[i]=p1;
//             buy[j]=p2;
//             j++;
//         }
//         else
//         {
//             p1.first=0;
//             p2.first=diff;
//             ans+=(abs(p1.second-p2.second)*(p2.first-buy[j].first));
//             cell[i]=p1;
//             buy[j]=p2;
//             i++;
//         }
//       }
//       return ans;


// long ans = 0;
//         int i = 0, j = 0;
//         while(true) {
//             while (i < n && arr[i] <= 0)
//                 i++;
//             while (j < n && arr[j] >= 0)
//                 j++;
//             if(i == n || j == n ) break;
//             int change = Math.min(arr[i], -arr[j]);
//             ans += (Math.abs(i - j) * change);
//             arr[i] -= change;
//             arr[j] += change;
//         }