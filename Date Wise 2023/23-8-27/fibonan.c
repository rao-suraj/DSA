#include<stdio.h>

int main(){
    int first=1;
    int second=1;
    int arr[100];
    arr[1]=1;
    printf("Enter the nth term");
    int even=1,odd=1;
    for(int i=3;i<=11;i++){
       if(arr[i]%2==0){
            odd*=3;
            arr[i]=odd;
       }else{
            even*=2;
            arr[i]=even;
       }
    }
    printf("%d",arr[11]);
    return 0;
}