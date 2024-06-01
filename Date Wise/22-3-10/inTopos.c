#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 10

typedef struct{
    int top;
    int item[MAX];
}STACK;

void push(STACK* s,int ele);
int pop(STACK* s);
int crec(STACK *s,char op);

void convert(STACK *s,char inf[],char pre[]);

void main()
{
    STACK s;
    char inf[100],pre[100];
    s.top=-1;
    s.item[++s.top]='#';
    printf("enter the expression\n");
    scanf("%s",inf);
    convert(&s,inf,pre);
    printf("%s",pre);
}

void push(STACK *s, int ele)
{
    if(s->top==MAX-1)
    {
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

void convert(STACK *s,char inf[],char pre[])
{
    char token;
    int i;
    int j=0;
    for(i=0;i!=inf[i]!='\0';i++)
    {
        token=inf[i];
        if(isalnum(token))
        {
            pre[j++]=token;
        }
        else if(token=='(')
        {
            push(s,token);
        }
        else if(token==')')
        {
            while (s->item[s->top]!='(')
            {
                pre[j++]=pop(s);
            }
            pop(s);
        }
        else 
        {
            while(crec(s,s->item[s->top])>=crec(s,token))
            {
                pre[j++]=pop(s);
                printf("slfdhaksfd\n");
            }
            push(s,token);
        }
    }
    while (s->item[s->top]!='#')
    {
        pre[j++]=pop(s);
    }
    pre[j]='\0';
}

int crec(STACK *s,char op)
{
    if(op=='^')
    {
        return 4;
    }
    else if(op=='*' || op=='/' || op=='%')
    {
        return 3;
    }
    else if(op=='+' || op=='-')
    {
        return 2;
    }
    else if(op=='(')
    {
        return 1;
    }
    else if(op=='#')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}