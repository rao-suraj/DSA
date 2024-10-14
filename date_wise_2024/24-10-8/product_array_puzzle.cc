/* 
       vector<long long int> nm=nums;
        bool hasZero = false;
        int zeroCount = 0;
        long long product = 1;
        
        for(int i=0;i<nm.size();i++) {
            if(nm[i]==0) {
                hasZero= true;
                zeroCount++;
            }else {
                product*=nm[i];
            }
        }
        
        if(hasZero) {
            if(zeroCount > 1) {
                for(int i=0;i<nm.size();i++) {
                    nm[i]=0;
                }
            } else {
                for(int i=0;i<nm.size();i++) {
                    if(nm[i]==0) {
                        nm[i]=product;
                    } else {
                        nm[i]=0;
                    }
                }
            }
        } else {
            for(int i=0;i<nm.size();i++) {
                nm[i]=product/nm[i];
            }
        }
        
        return nm;
    }
};
*/


