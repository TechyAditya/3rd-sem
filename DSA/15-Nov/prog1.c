#include <stdio.h>
#include <stdlib.h>
struct tnode
{
    struct tnode *left;
    int data;
    struct tnode *right;
};
struct tnode *root = NULL, *node, *par, *suc, *parsuc;
void insert_node(int a);

void inorder(struct tnode *t);
void postorder(struct tnode *t);
void preorder(struct tnode *t);

void delete_node(int key);
void search_tree(int key);
void delete_two(struct tnode *);
void delete_one_zero(struct tnode *, struct tnode *);

int main()
{
    int num, val, ch;
    printf("Enter total number of nodes you want to insert in the tree: ");
    scanf("%d", &num);
    while (num-- > 0)
    {
        printf("Enter the data of the node: ");
        scanf("%d", &val);
        insert_node(val);
    }

    printf("Binary search tree:\n\n");
    printf("1. Display inorder traversal of the tree\n");
    printf("2. Display postorder traversal of the tree\n");
    printf("3. Display preorder traversal of the tree\n");
    printf("4. Search a node from the tree\n");
    printf("5. Exit\n");

    while (1)
    {
        printf("Enter the choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Inorder traversal: ");
            inorder(root);
            printf("\n\n");
            break;
        case 2:
            printf("Postorder traversal: ");
            postorder(root);
            printf("\n\n");
            break;
        case 3:
            printf("Preorder traversal: ");
            preorder(root);
            printf("\n\n");
            break;
        case 4:
            printf("Enter the element to search: ");
            scanf("%d", &val);
            search_tree(val);
            printf("\n\n");
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice\n\n");
        }
    }
    return 0;
}

void insert_node(int a)
{
    struct tnode *temp1, *temp2;
    if (root == NULL)
    {
        root = (struct tnode *)malloc(sizeof(struct tnode));
        root->data = a;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        temp1 = root;
        while (temp1 != NULL)
        {
            temp2 = temp1;
            if (a < (temp1->data))
                temp1 = temp1->left;
            else
                temp1 = temp1->right;
        }
        if (a < (temp2->data))
        {
            temp2->left = (struct tnode *)malloc(sizeof(struct tnode));
            temp2 = temp2->left;
            temp2->data = a;
            temp2->left = NULL;
            temp2->right = NULL;
        }
        else
        {
            temp2->right = (struct tnode *)malloc(sizeof(struct tnode));
            temp2 = temp2->right;
            temp2->data = a;
            temp2->left = NULL;
            temp2->right = NULL;
        }
    }
}

void inorder(struct tnode *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf("%d ", t->data);
        inorder(t->right);
    }
}

void postorder(struct tnode *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d ", t->data);
    }
}

void preorder(struct tnode *t)
{
    if (t != NULL)
    {
        printf("%d ", t->data);
        preorder(t->left);
        preorder(t->right);
    }
}

void search_tree(int key)
{
    struct tnode *temp;
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
                static int level = 1;
                if (key == temp->data)
                {
                    node = temp;
                    printf("Data found on level %d", level);
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
                level++;
            }
        }
    }
}