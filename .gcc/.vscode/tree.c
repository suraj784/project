#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
} node;
void insertion(int data, node **root);
void deletion(int data, node *root);
void inorder(node *root);
int main()
{
    node *node = NULL;
    
    insertion(50,&root);
    insertion(40,&root);
    insertion(70,&root);
    insertion(30,&root);
    insertion(45,&root);
    insertion(60,&root);
    insertion(80,&root);
    insertion(20,&root);
    insertion(48,&root);
    insertion(65,&root);
    insertion(75,&root);
    inorder(root);
    deletion(70,root);
    printf("\n");
    inorder(root);

    

    return 0;

}
void insertion(int data, node **root)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->lchild = NULL;
    ptr->rchild = NULL;
    if (*root == NULL)
    {
        *root = ptr;
    }
    else
    {
        node *temp = *root;
        node *temp1;
        while (temp != NULL)
        {
            temp1 = temp;
            if (data < temp->data)
            {
                temp = temp->lchild;
            }
            else
            {
                temp = temp->rchild;
            }
        }
        if (data < temp1->data)
        {
            temp1->lchild = ptr;
        }
        else
        {
            temp1->rchild = ptr;
        }
    }
}
void deletion(int data, node *root)
{
    node *temp = root;
    node *temp1;

    int flag = 0;
    while (temp != NULL)
    {
        if (data == temp->data)
        {
            flag = 1;
            break;
        }
        else
        {
            temp1 = temp;
            if (data < temp->data)
            {
                temp = temp->lchild;
            }
            else
            {
                if (data > temp->data)
                {
                    temp = temp->rchild;
                }
            }
        }
    }
    if (flag == 0)
    {
        printf("data is not preset\n");
    }
    else
    {
        if (temp->lchild == NULL && temp->rchild == NULL)
        {
            if (temp->data > temp1->data)
            {
                temp1->rchild = NULL;
            }
            else
            {
                temp1->lchild = NULL;
            }
        }
        else
        {
            if (temp->lchild == NULL && temp->rchild != NULL)
            {
                if (temp->data > temp->data)
                {
                    temp->rchild = temp->rchild;
                }
                else
                {
                    temp1->lchild = temp->rchild;
                }
            }
            else
            {
                if (temp->lchild != NULL && temp->rchild == NULL)
                {
                    if (temp->data > temp1->data)
                    {
                        temp->rchild = temp->lchild;
                    }
                }
                else
                {
                    if (temp->lchild != NULL && temp->rchild != NULL)
                    {
                        node *ptr;
                        if (temp->data > temp->data)
                        {
                            temp->rchild = temp->data;
                        }
                        else
                        {
                            temp1->rchild = temp->lchild;
                        }
                        ptr = temp->lchild;
                        while (ptr->rchild != NULL)
                        {
                            ptr = ptr->rchild;
                        }
                        ptr->rchild = temp->rchild;
                    }
                }
            }
        }
    }
    free(temp);
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->rchild);
        printf("%d ", root->data);
        inorder(root->rchild);
    }
}