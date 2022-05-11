#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{    Node * nod=
     nod=(Node *)malloc(sizeof(Node));
     nod->data=data;
     if(head==NULL) {head =nod; return head;}
     Node *p;
     p=head;
     while(p->next!=NULL)
         p=p->next;
     p->next=nod;
     return head;    

    //Complete this function
}

void display(Node *head)