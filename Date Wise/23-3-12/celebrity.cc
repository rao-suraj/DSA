// bool flag=false;
//         int count=0;
//         int note;
//         for(int i=0;i<n;i++)
//         {
//             flag=false;
//             for(int j=0;j<n;j++)
//             {
//                 if(M[i][j]!=0)
//                 {
//                     flag=true;
//                     continue;
//                 }
//             }
//             if(flag==false)
//             {
//                 count+=1;
//                 note=i;
//             }
//         }
//         if(count==1)
//         {
//             return note;
//         }else
//         {
//             return -1;
//         }

stack<int> st;
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
        
        while(st.size()>=2)
        {
            int i=st.top();
            st.pop();
            int j=st.top();
            st.pop();
            
            if(M[i][j]==1)
            {
                st.push(j);
            }
            else
            {
                st.push(i);
            }
        }
    
    int pos=st.top();
    for(int i=0;i<n;i++)
    {
        if(i!=pos)
        {
            if(M[i][pos]==0 || M[pos][i]==1)
            {
                return -1;
            }
        }
    }
    return pos;