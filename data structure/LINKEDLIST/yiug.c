#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *createNode()
{
    struct node *temp=NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data :");
    scanf("%d",&temp->data);
    temp->next = NULL;
    return temp;
}

struct node *createList(int n)
{
    struct node *head, *temp;
    if (n<=0)
    {
        return NULL;
    }
    head = createNode();
    temp = head;
    for (int i = 1; i < n; i++)
    {
        temp->next = createNode();
        temp = temp->next;
    }
    return head;
}

int searchList(struct node *head, int val)
{
    if(head==NULL)
        return 0;
    struct node *temp=head;
    while (temp!=NULL)
    {
        if(temp->data == val)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        temp = temp->next;
    }
}

struct node *findUnion(struct node *head1, struct node *head2)
{
    if(head1 == NULL || head2 == NULL)
        return NULL;
    struct node *head3=head1;
    struct node *temp=head3;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;
    return head3;
}

struct node *findIntersection(struct node *head1, struct node *head2)
{
    if(head1 == NULL || head2 == NULL)
        return NULL;
    struct node *head3=NULL;
    struct node *temp1=head1, *temp2=head2;
    while(temp1->next !=NULL)
    {
        while (temp2->next != NULL)
        {
            if(searchList(head2, temp1->data))
            {
                head3->data = temp1->data;
                head3 = head3->next;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return head3;
}

void printList(struct node *head)
{
    struct node *temp=head;
    while (temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head1=NULL, *head2=NULL, *head3=NULL, *head4=NULL;
    head1 = createList(3);
    printList(head1);
    printf("\n");
    head2 = createList(4);
    printList(head2);
    printf("\n");
    head3 = findUnion(head1, head2);
    printList(head3);
    printf("\n");
    head4 = findIntersection(head1, head2);
    printList(head4);
    return 0;
}