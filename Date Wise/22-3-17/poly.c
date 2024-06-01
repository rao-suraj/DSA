#include<stdio.h>
#include<stdlib.h>


struct poly
{
    int coef;
    int x;
    int y;
    int z;
    struct poly* next;
};

typedef struct poly* ptrr;

ptrr a=NULL,b=NULL,c=NULL,p=NULL;

ptrr readpoly(int count);
void display();
 int main(){
    int ch;
    int count;
    while(1)
    {
        printf("\nChoice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("Enter count\n");
                    scanf("%d",&count);
                    p=readpoly(count);
            break;
            case 2:display();
            break;
            case 3: 
            break;
            case 4: 
            break;
            default:printf("Invalid\n");
        }
    }
    return 0;
}

ptrr readpoly(int count)
{
    ptrr temp,str=NULL,cpt;
    temp=(ptrr) malloc(sizeof(struct poly));
    temp->coef=-1;
    temp->x=-1;
    temp->y=-1;
    temp->z=-1;
    if(str==NULL)
    {
        str=temp;
        temp->next=str;
    }
    while(count!=0)
    {
        temp=(ptrr)malloc(sizeof(struct poly));
        printf("Enter values\n");
        scanf("%d%d%d%d",&(temp->coef),&(temp->x),&(temp->y),&(temp->z));
        cpt=str;
        cpt=cpt->next;
        while(cpt->next!=str)
        {
            printf("FFF");
            cpt=cpt->next;
        }
        cpt->next=temp;
        temp->next=str;
        count--;
    }
    return str;
}

void display()
{
    ptrr bb=p->next;
    while(bb!=p)
    {
        if(bb->coef>0)
        printf("+");
        printf("%dx^%dy^%dz^%d",bb->coef,bb->x,bb->y,bb->z);
        bb=bb->next;
    }
}