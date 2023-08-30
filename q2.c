#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
struct zod{
    int data;
    struct zod *next;
};
struct zod *head1=NULL;
struct jkl{
    int data;
    struct jkl *next;
};
struct jkl *head2=NULL;
void push(int x)
{
    struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp=head;
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    head=newnode;
    else{
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
    }


}

void pos(int x)
{
    struct zod *newnode;
        newnode=(struct zod*)malloc(sizeof(struct zod));
    struct zod *temp=head1;
    newnode->data=x;
    newnode->next=NULL;
    if(head1==NULL)
     head1=newnode;
     else{
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
     }
}
void neg(int x)
{
    struct jkl *newnode;
    newnode=(struct jkl*)malloc(sizeof(struct jkl));
    struct jkl *temp=head2;
    newnode->data=x;
    newnode->next=NULL;
    if(head2==NULL)
     head2=newnode;
     else{
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
     }
}
void traverse()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        
        if(temp->data<0){
            printf("%d ",temp->data);
          neg(temp->data);
        }
          else{
          pos(temp->data);
              printf("%d ",temp->data);
          }
          temp=temp->next;
    }
}
void traverse1()
{
    struct zod *temp=head1;
    while(temp!=NULL)
    {
          printf("%d ",temp->data);
          temp=temp->next;
    }
}
void traverse2()
{
    struct jkl *temp=head2;
    while(temp!=NULL)
    {
           printf("%d ",temp->data);
          temp=temp->next;
    }
}
int main()
{
    int x,ch=0;
    while(ch!=4)
    {
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the value\n");
            scanf("%d",&x);
            push(x);
            break;

            case 2:
            traverse();
            break;
            
            case 3:
            traverse1();
            break;
            
            case 5:
            traverse2();
            break;
            
            default:
            printf("Invalid\n");

        }
    }
   return 0;
} 