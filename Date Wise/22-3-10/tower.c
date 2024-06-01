#include<stdio.h>

void Tower(int n,int source,int helper,int dest);

void main()
{
    int n;
    scanf("%d",&n);
    Tower(n,'A','B','C');
}

void Tower(int n,int source,int helper,int dest)
{
    if(n==1)
    {
        printf("%d    %c to %c\n",n,source,dest);
    }
    else
    {
        Tower(n-1,source,dest,helper);
        printf("%d   %c to %c\n",n,source,dest);
        Tower(n-1,helper,source,dest);
    }
}