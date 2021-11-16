#include <stdio.h>
#include <stdlib.h>

struct Tnode
{
    struct Tnode *left, *right;
    int data;
};

void insert(int a);

void inorder(struct Tnode *t);
void postorder(struct Tnode *t);
void preorder(struct Tnode *t);

void search(int);

struct Tnode *root = NULL, *node, *par, *suc, *parsuc;

int main()
{
    int n, val;

    printf("Enter the total number of nodes that you want to insert- ");
    scanf("%d", &n);

    while (n > 0)
    {
        printf("\nEnter the data- ");
        scanf("%d", &val);
        insert(val);
        n--;
    }

    while (1)
    {
        int a;
        printf("1. INORDER TRAVERSAL\n2. POSTORDER TRAVERSAL\n3. PREORDER TRAVERSAL\n4. Search\n\n");
        printf("\nEnter choice- \n");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
        {
            printf("\nIn-order Traversal- ");
            inorder(root);
            printf("\n\n");
            break;
        };
        case 2:
        {
            printf("\nPost-order Traversal- ");
            postorder(root);
            printf("\n\n");
            break;
        };
        case 3:
        {
            printf("\nPre-order Traversal- ");
            preorder(root);
            printf("\n\n");
            break;
        };
        case 4:
        {
            printf("\nEnter value to be searched for- ");
            int i;
            scanf("%d", &i);
            search(i);
            printf("\n\n");
            break;
        };
        };
    }
    return 0;
}

void insert(int a)
{
    struct Tnode *t1, *t2;
    if (root == NULL)
    {
        root = (struct Tnode *)malloc(sizeof(struct Tnode));
        root->data = 1;
        root->left = NULL;
        root->right = NULL;
    }

    else
    {
        t1 = root;
        while (t1 != NULL)
        {
            t2 = t1;
            if (a < t1->data)
                t1 = t1->left;
            else
                t1 = t1->right;
        }

        if (a < (t2->data))
        {
            t2->left = (struct Tnode *)malloc(sizeof(struct Tnode));
            t2 = t2->left;
            t2->data = a;
            t2->left = NULL;
            t2->right = NULL;
        }

        else
        {
            t2->right = (struct Tnode *)malloc(sizeof(struct Tnode));
            t2 = t2->right;
            t2->data = a;
            t2->left = NULL;
            t2->right = NULL;
        }
    }
}

void inorder(struct Tnode *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf(" %d ", t->data);
        inorder(t->right);
    }
}

void postorder(struct Tnode *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf(" %d ", t->data);
    }
}

void preorder(struct Tnode *t)
{
    if (t != NULL)
    {
        printf(" %d ", t->data);
        preorder(t->left);
        preorder(t->right);
    }
}

void search(int key)
{
    struct Tnode *temp;
    node = NULL;
    if (root != NULL)
    {
        if (root->data == key)
        {
            node = root;
            par = NULL;
        }
        else
        {
            par = root;
            if (key < root->data)
                temp = root->left;
            else
                temp = root->right;

            while (temp != NULL)
            {

                if (key == temp->data)
                {
                    node = temp;
                    break;
                }

                if (key < temp->data)
                {
                    par = temp;
                    temp = temp->left;
                }
                else
                {
                    par = temp;
                    temp = temp->right;
                }
            }
        }
    }
}