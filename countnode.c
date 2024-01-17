//program to count the node of single linked list.


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;

};

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data=45;
    current->link=NULL;
    head->link=current;

    current = malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;

    current = malloc(sizeof(struct node));
    current->data=10;
    current->link=NULL;
    head->link->link->link=current;

}

void count_node(struct node *head ){
    int count = 0;
    if (head==NULL)
    {
        printf("linked list is empty!!!!");
    }  
    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("%d",count);      
}
