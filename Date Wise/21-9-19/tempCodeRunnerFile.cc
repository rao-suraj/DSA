int Bin_Ser(int arr[],int key,int low,int high)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    if(arr[mid]>=key)
    {
        high=mid-1;
        return Bin_Ser(arr,key,low,high);
    }
    else
    {
        low=mid+1;
        return Bin_Ser(arr,key,low,high);
    }
}