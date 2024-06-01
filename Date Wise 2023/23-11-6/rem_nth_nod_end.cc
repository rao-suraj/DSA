#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node *Node;
Node first = NULL;
Node last, temp;

Node getNode()
{
    temp = (Node)malloc(sizeof(struct node));
    temp->next = NULL;
    return temp;
}

void readNode()
{
    temp = getNode();
    cout << "Enter the element" << endl;
    cin >> temp->data;
}

void createList()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        readNode();
        if (first == NULL)
        {
            first = last = temp;
        }
        else
        {
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = temp;
            temp->prev = last;
        }
    }
}

void display()
{
    temp = first;
    if (first == NULL)
    {
        printf("Enpty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            cout << endl;
            temp = temp->next;
        }
    }
}

int removeNthElement(int N)
{
    if(N==1) {
        
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    temp = last;
    for (int i = 1; i <= N - 1; i++)
    {
        temp = temp->prev;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    return temp->data;
}
int main()
{
    int N;
    createList();
    cout << "Enter the value of N" << endl;
    cin >> N;
    cout << removeNthElement(N) << endl;
    display();
    return 0;
}
