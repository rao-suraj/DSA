
void rverese(int arr[], int start, int end)
{
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    rverese(arr, start + 1, end - 1);
}

void arange(int arr[],int n,int big,int end)
{
    if(n==1 || n==0)
    {
        return;
    }
    else if(n==2)
    {
        if(arr[big]>0 && arr[end]<0)
        {
            int temp=arr[big];
            arr[big]=arr[end];
            arr[end]=temp;
        }
        return;
    }
    else
    {
        arange(arr,n/2,big,big+((n/2)-1));
        arange(arr,n-(n/2),big+n/2,end);
        
        int LnB=-1,LnE=-1,LpB=-1,LpE=-1;
        if(arr[big]<0 && arr[big+(n/2-1)]<0){
            LnB=big;
            LnE=big+(n/2-1);
        }else if(arr[big]>0 && arr[big+(n/2-1)]>0){
            LpB=big;
            LpE=big+(n/2-1);
        }else{
            LnB=big;
            LpE=big+(n/2-1);
            for(int i=big;i<=big+(n/2-1);i++)
            {
                if(arr[i]>0)
                {
                    LnE=i-1;
                    LpB=i;
                    break;
                }
            }
        }
        
        int RnB=-1,RnE=-1,RpB=-1,RpE=-1;
        if(arr[big+n/2]<0 && arr[end]<0){
            RnB=big;
            RnE=big+(n/2-1);
        }else if(arr[big+n/2]>0 && arr[end]>0){
            RpB=big;
            RpE=big+(n/2-1);
        }else{
            RnB=big+n/2;
            RpE=end;
            for(int i=big+n/2;i<=end;i++)
            {
                if(arr[i]>0)
                {
                    RnE=i-1;
                    RpB=i;
                    break;
                }
            }
        }
        if(LpB!=-1 && LpE!=-1)
        rverese(arr,LpB,LpE);
        
        if(RnB!=-1 && RnE!=-1)
        rverese(arr,RnB,RnE);
        
        if(LpB==-1 && RnE==-1){
            return;
        }else if(LpB==-1){
            rverese(arr,RnB,RnE);
        }else if(RnE==-1){
            rverese(arr,LpB,LpE);
        }else
        {
            rverese(arr,LpB,RnE);
        }
        return ;
    }
}

void Rearrange(int arr[], int n)
{
    arange(arr,n,0,n-1);
}