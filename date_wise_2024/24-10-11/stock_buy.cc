/*
int getMaxProfit(int arr[],int size) {
    int minm= INT_MAX;
    int prof=0;
    for(int i=0;i<size;i++) {
        int currProf = arr[i]-minm;
        if(currProf > prof) {
            prof = currProf;
        }
        minm = min(minm,arr[i]);
    }
    return prof;
}
*/

[46,35,-9,18,-6,19,-26,-37,-10,-9,15,14]