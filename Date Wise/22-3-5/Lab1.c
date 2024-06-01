#include<stdlib.h>
#include<stdio.h>
#define Max 25

void createArr(int *p,int *n);
void displayArr(int *p,int *n);
void insertArr(int *p,int *n,int pos,int elem);
void deleteArr(int *p,int *n,int pos);

int main()
{
    int ch,n,a[Max];int pos; int elem;
    while(1)
    {
        printf("Press 1.cre 2.Dis 3.Ins 4.Del\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter number\n");
                   scanf("%d",&n);
                   createArr(a,&n);
                   printf("Array has been created\n");
                   break;
            case 2:displayArr(a,&n);
                   break;
            case 3:printf("Enter the position \n");
                    scanf("%d",&pos);
                    printf("Enter the element to be inserthed\n");
                    scanf("%d",&elem);
                    insertArr(a,&n,pos,elem);
                    break;
            case 4: printf("Enter the pos\n");
                    scanf("%d",&pos);
                    deleteArr(a,&n,pos);
                    break;
            default: printf("invalid input\n");
        }
    }
}


void createArr(int *p,int *n)
{
    int i;
    printf("Enter the elements\n");
    for(i=0;i<*n;i++)
    {
        scanf("%d",p+i);
        printf("FF");
    }
}

void displayArr(int *p,int *n)
{
    int i;
    for(i=0;i<*n;i++)
    {
        printf("%d",*(p+i));
    }
}

void insertArr(int *p,int *n,int pos,int ele)
{
    int j;
    for(j=*n-1;j>=pos-1;j--)
    {
        *(p+j+1)=*(p+j);
    }
    *(p+pos-1)=ele;
    *n=*n+1;
}

void deleteArr(int *p,int *n,int pos)
{
    int i;
    int ele=*(p+pos-1);
    for(i=pos-1;i<*n-1;i++)
    {
        *(p+i)=*(p+i+1);
    }
    *n=*n-1;

}