#include<stdio.h>

typedef struct 
{
    int Row;
    int Col;
    int Value;
}Block;

 int main(){
    Block Term[100];
    scanf("%d",&Term[0].Row);
    scanf("%d",&Term[0].Col);
    printf("Enter the number of Non-Zero elements\n");
    scanf("%d",&Term[0].Value);
    
    printf("Enter the Non-Zero elements");
    for(int i=1;i<=Term[0].Value;i++)
    {
        printf("Enter the Row no. Col No. Value\n");
        scanf("%d%d%d",&Term[i].Row,&Term[i].Col,&Term[i].Value);
    }

    for(int i=1;i<=Term[0].Row;i++)
    {
        for(int j=1;j<=Term[0].Col;j++)
        {
            char flag='f';
            for(int k=1;k<=Term[0].Value;k++)
            {
                if(Term[k].Row == i && Term[k].Col == j)
                {
                    flag='t';
                    printf("%d",Term[k].Value);
                    break;
                }
            }
                if(flag=='f')
                {
                    printf("0");
                }
        }
        printf("\n");
    }

    return 0;
}