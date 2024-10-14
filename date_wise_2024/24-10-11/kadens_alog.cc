/*
int maxSumSubarray(int arr[],int size) {
    int sum = INT_MIN;
    int currentSum = arr[0];
    for(int i=1;i<size;i++) {
        currentSum = max(currentSum+arr[i],arr[i]);
        if(currentSum > sum) {
            sum = currentSum;
        }
    }
    return sum;
}



SECOND VARIENT PRINT THE SUB ARRAY

    int arr[] = {1,2,-3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ed=-1,st=-1,currentSt=0;
    int sum=0;
    int max_sum = INT_MIN;
    for(int i=0;i<size;i++) {
        sum+=arr[i];
        if(sum  > max_sum) {
            max_sum = sum;
            st = currentSt;
            ed = i;
        } else if( sum <= 0) {
            sum = 0;
            currentSt = i+1;
        }
    }
    
    for(int i=st;i<=ed;i++) {
        cout<<arr[i];
    }
*/