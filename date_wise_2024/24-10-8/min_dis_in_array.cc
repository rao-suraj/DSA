/*
    Minimum distance in an Array

        vector<int> closest(n);
        int previous = INT_MAX;
        int isPresent = false;
        for(int i=0;i<n;i++) {
            if(a[i] == x) {
                isPresent = true;
                closest[i] = 0;
                previous = 0;
            } else if(previous == INT_MAX) {
                closest[i] =previous = INT_MAX;
            } else {
                closest[i] =previous =previous + 1;
            }
        }
        if(isPresent == true) {
            isPresent = false;
        } else {
            return -1;
        }
        previous = INT_MAX;
        for(int i=n-1;i>=0;i--) {
            if(a[i] == x) {
                closest[i] = previous = min(0,closest[i]);
            } else if(previous == INT_MAX) {
                closest[i] = previous =min(closest[i],INT_MAX);
            } else {
                closest[i] = previous = min(closest[i],previous + 1);
            }
        }
        
        int mn = INT_MAX;
        for(int i=0;i<n;i++) {
            if(a[i] == y) {
                isPresent = true;
                mn = min(mn,closest[i]); 
            }
        }
        if(isPresent) {
            return mn;
        } else {
            return -1;
        }
*/