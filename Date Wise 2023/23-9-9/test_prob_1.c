#include<stdio.h>

/*
 h=2;
 #2B#
 212A

 h=3
 ##3C##
 #323B#
 32123A
*/ 



int main(){
    int n;
    scanf("%d",&n);
    int sq=n*2;

    for(int i=n;i>0;i--){
        for(int j=1;j<=sq;j++)
        {
            if(j<=i-1 || j>sq-(i-1))
            {
                printf("#");
            }
            else if(j==sq-(i-1))
                {
                    printf("%c",'A'+i-1);
                } else if(j==n){
                    printf("%d",i);
                } else{
                    printf(" ");
                }
        }
        printf("\n");
    }
    return 1;
}