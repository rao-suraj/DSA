#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int num;
    scanf("%d",&num);
    bool flag=true;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0){
            flag=false;
        }
    }
    printf("%d",flag);
    return 0;
}
