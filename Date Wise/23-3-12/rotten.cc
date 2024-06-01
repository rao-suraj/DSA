// int m=g[0].size();
//         int n=g.size();
//         bool fg=true;
//         int count=1;
//         int prect=0,curct=0;
//         bool ch[n][m];
//         bool tstfg;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(g[i][j]==2)
//                 {
//                     ch[i][j]=true;
//                 }
//                 else
//                 {
//                     ch[i][j]=false;
//                 }
//             }
//         }
//         while(fg)
//         {
//             for(int i=0;i<n;i++)
//             {
//                 for(int j=0;j<m;j++)
//                 {
//                     if(g[i][j]==2)
//                     {
//                         if((i-1)>=0 && g[i-1][j]==1 && ch[i][j]==true)
//                         {
//                             g[i-1][j]=2;
//                         }
//                         if((i+1)<n && g[i+1][j]==1 && ch[i][j]==true)
//                         {
//                             g[i+1][j]=2;
//                         }
//                         if((j-1)>=0 && g[i][j-1]==1 && ch[i][j]==true)
//                         {
//                             g[i][j-1]=2;
//                         }
//                         if((j+1)<n && g[i][j+1]==1 && ch[i][j]==true)
//                         {
//                             g[i][j+1]=2;
//                         }
//                     }
//                 }
//             }
//             tstfg=false;
//             for(int i=0;i<n;i++)
//             {
//                 for(int j=0;j<m;j++)
//                 {
//                     if(g[i][j]==1)
//                     {
//                         tstfg=true;
//                     }
//                     else if(g[i][j]==2)
//                     {
//                         curct++;
//                     }
                    
//                     if(g[i][j]==2)
//                     {
//                         ch[i][j]=true;
//                     }
//                     else
//                     {
//                         ch[i][j]=false;
//                     }
//                 }
//             }
//             if(tstfg==false)
//             {
//                 return count;
//             }else if(prect==curct)
//             {
//                 return -1;
//             }
//             prect=curct;
//             curct=0;
//             count++;
//             cout<<count;
//         }