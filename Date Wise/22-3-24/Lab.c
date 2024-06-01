#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char ele[100];
    int top;
}Stack;

void push(Stack *s1, char ele);
void pop(Stack *s1);
int Prec(char ele);
void compare(char inff[],char posf[],Stack* s1);

 int main(){
    Stack s;
    s.top=-1;
    s.ele[s.top++]='#';
    char inf[100],posf[100];
    compare(&s,inf,posf);
    printf("%s",posf);
    return 0;
}

void push(Stack *s1, char ele)
{
    s1->
}

void pop(Stack* s1)
{
    s1->top
}