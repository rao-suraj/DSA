#include<stdio.h>
#define MAX 10

typedef struct{
    int top;
    int item[MAX];
}STACK;

void push(STACK* s,int ele);
int pop(STACK* s);
void display(STACK *s);
void palindrome(STACK *s,int ele);

int f=1;

void main()
{
    STACK s;
    int ch,ele,toCheck;
    s.top=-1;
    while(1)
    {
    printf("1.push 2.pop 3.disp 4.isPalindrome\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:printf("Enter the ele\n");
        scanf("%d",&ele);
        push(&s,ele);
        break;
    case 2:ele=pop(&s);
        if(f)
        {
        printf("The deleted element is %d",ele);
        }
        break;
    case 3:display(&s);
        break;
    case 4:printf("Enter the elements\n");
        scanf("%d",&toCheck);
        palindrome(&s,toCheck);
        break;
    default:printf("Invalid input\n");
    }
    }
}

void push(STACK *s, int ele)
{
    if(s->top==MAX-1)
    {
        f=0;
        printf("Stack is full\n");
    }
    else
    {
        s->top=(s->top)+1;
        s->item[s->top]=ele;
    }
}

int pop(STACK *s)
{
    int ele;
    if(s->top==-1)
    {
        printf("Stack is empty\n");
    }
    else {
        ele=s->item[s->top];
        s->top=s->top-1;
        return ele;
    }
}

void display(STACK *s)
{
    int i;
    if(s->top==-1)
    {
        printf("Stack is empty\n");
    }
    else 
    {
        printf("Content are \n");
        for(i=s->top;i>=0;i--)
        {
            printf("%d",s->item[i]);
        }
    }
}

void palindrome(STACK *s,int ele)
{
    int temp=ele,rem,r,fl=1;
    s->top=-1;
    while(temp!=0)
    {
        rem=temp%10;
        push(s,rem);
        temp=temp/10;
    }
    while(ele!=0)
    {
        rem=ele%10;
        r=pop(s);
        if(r!=rem)
        {
            fl=0;
            s->top=-1;
            printf("Not a palindrome\n");
        }
        ele=ele/10;
    }
    if(fl)
    {
        printf("palindrome\n");
    }
}