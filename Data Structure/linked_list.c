#include<stdio.h>
#include<conio.h>

struct node
{
    int VALUE;
    struct node *NEXT;
    *FIRST = NULL;
    *LAST = NULL;
};

void insert (int n)
{
    struct node *PTR = (struct node *)malloc(sizeof(struct node));
    PTR->VALUE = n;
    if(FIRST==NULL)
    {
        FIRST=LAST=PTR;
        PRT->NEXT=NULL;
    }
    else
    {
        LAST->NEXT=PTR;
        PTR->NEXT=NULL;
        LAST=PTR;
    }
}

void print()
{

    struct node *PTR;
    if(FIRST==NULL)
        printf("\n\tLinked list is empty.");
    else
    {
        printf("Linked List Elements:\n")
        for(PTR=FIRST;PTR!=LAST;PTR=PTR->NEXT)
            printf("\t%d",PTR->VALUE);
        printf("\t%d",LAST->VALUE);
    }
}

