#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void insert_at_beginning(int data, node **head);
void delete_from_beginning(node **head);
void insert_at_end(int data, node **head);
void delete_from_end(node **head);
void insert_at_between(int data, int pos, node **head);
void delete_from_between(int pos, node **head);
void display(node *head);
int main()
{
    node *head = NULL;
    insert_at_beginning(30, &head);
    insert_at_beginning(20, &head);
    insert_at_beginning(10, &head);
    insert_at_end(40, &head);
    insert_at_end(50, &head);
    insert_at_end(60, &head);
    display(head);
    delete_from_beginning(&head);
    delete_from_end(&head);
    display(head);
}
void insert_at_beginning(int data, node **head)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = *head;
    *head = ptr;
    printf("element is inserted at beginning\n");
}
void delete_from_beginning(node **head)
{
    if (*head == NULL)
    {
        printf("no node to delete\n");
    }
    else
    {
        node *temp = *head;
        *head = temp->next;
        free(temp);
        printf("node is deleted from beginning\n");
    }
}
void insert_at_end(int data, node **head)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = NULL;
    if (*head == NULL)
    {
        *head = ptr;
    }
    else
    {
        node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    printf("element is inserted at end\n");
}
void delete_from_end(node **head)
{
    if (*head == NULL)
    {
        printf("no node to delete\n");
    }
    else
    {

        if ((*head)->next == NULL)
        {
            free(*head);
            *head = NULL;
        }
        else
        {
            node *temp = *head;
            node *temp1;
            while (temp->next != NULL)
            {
                temp1 = temp;
                temp = temp->next;
            }
            temp1->next = NULL;
            free(temp);
        }
        printf("node is deleted from end\n");
    }
}
void insert_at_between(int data, int pos, node **head)
{
    if (pos == 0)
    {
        printf("invalid pos.\n");
    }
    else
    {

        if (pos == 1)
        {
            insert_at_beginning(data, head);
        }
        else
        {
            node *temp = *head;
            int count = 1;
            while (count < pos - 1)
            {
                if (temp != NULL)
                {
                    temp = temp->next;
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (temp != NULL)
            {
                node *ptr = (node *)malloc(sizeof(node));
                ptr->data = data;
                ptr->next = temp->next;
                temp->next = ptr;
            }
            else
            {
                printf("invalid pos.\n");
            }
        }
    }
}

void delete_from_between(int pos, node **head)
{
    if (pos == 0)
    {
        printf("invalid pos.\n");
    }
    else
    {

        if (pos == 1)
        {
            delete_from_beginning(head);
        }
        else
        {
            node *temp = *head;
            int count = 1;
            while (count < pos - 1)
            {
                if (temp != NULL)
                {
                    temp = temp->next;
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (temp != NULL)
            {
                node *temp1 = temp->next;
                if (temp1 != NULL)
                {
                    temp->next = temp1->next;
                    free(temp1);
                }
                else
                {
                    printf("invalid pos.\n");
                }
            }
            else
            {
                printf("invalid pos.\n");
            }
        }
    }
}

void display(node *head)
{
    if (head == NULL)
    {
        printf("no node to display\n");
    }
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
