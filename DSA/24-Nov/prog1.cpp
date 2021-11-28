// WAP to create a binary search tree. Insert and delete node from the binary search tree. Find a node in the binary search tree and the in-order, post-order and pre-order traversal of the binary search tree. 
#include <stdio.h>
#include <stdlib.h>
struct tnode
{
    struct tnode *left;
    int data;
    struct tnode *right;
};
void insertnode(int a);
void inorder(struct tnode *t);
void postorder(struct tnode *t);
void preorder(struct tnode *t);
void deletenode(int key);
void searchtree(int key);
struct tnode *root = NULL, *node, *par, *suc, *parsuc;
int main()
{
    int n, val, ch;
    printf("\n BINARY SEARCH TREE:");
    printf("\n 1.INORDER TRAVERSAL:");
    printf("\n 2.POSTORDER TRAVERSAL:");
    printf("\n 3.PREORDER TRAVERSAL:");
    printf("\n 4.SEARCHING OF A NODE:");
    printf("\n 5.DELETE A NODE:");
    printf("\n 6.EXIT:");
    printf("\n Enter the total number of nodes you wamt to insert in the tree:");
    scanf("%d", &n);
    while (n > 0)
    {
        printf(" ENTER THE DATA OF THE NODE:");
        scanf("%d", &val);
        insertnode(val);
        n--;
    }
    while (1)
    {
        printf("\n Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n INORDER TRAVERSAL:");
            inorder(root);
            printf("\n");
            break;
        case 2:
            printf("\n POSTORDER TRAVERSAL:");
            postorder(root);
            printf("\n");
            break;
        case 3:
            printf("\n PREORDER TRAVERSAL:");
            preorder(root);
            printf("\n");
            break;
        case 4:
            printf("\n Enter element to be searched:");
            int i;
            scanf("%d", &i);
            searchtree(i);
            break;
        case 5:
            printf("\n Enter element to be deleted:");
            scanf("%d", &val);
            deletenode(val);
            break;
        case 6:
            exit(0);
            printf("\n SUCCESS IN EXCITED!!");
            break;
        default:
            printf("\n CHOICE ENTERED IS INVALID!!");
        }
    }
    return 0;
}
void insertnode(int a)
{
    struct tnode *temp1, *temp2;
    if (root == NULL)
    {
        root = (struct tnode *)malloc(sizeof(struct tnode));
        root->data = 1;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        temp1 = root;
        while (temp1 != NULL)
        {
            temp2 = temp1;
            if (a < temp1->data)
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
        postorder(t->right);
    }
}
void searchtree(int key)
{
    struct tnode *temp;
    node = NULL;
    if (root != NULL)
    {
        if (root->data == key)
        {
            node = root;
            par = NULL;
            printf("\nData found at root of tree\n");
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
                    printf("\nData found on Level %d", level);
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
void delete_one(struct tnode *nd, struct tnode *pr)
{
    struct tnode *child;
    if (nd->left == NULL && nd->right == NULL)
        child = NULL;
    else if (nd->left != NULL)
        ;
    else
        child = nd->right;
    if (par != NULL)
    {
        if (nd == pr->left)
        {
            pr->left = child;
            child = nd->left;
        }
        else
            pr->right = child;
    }
    else
        root = child;
}
void delete_two(struct tnode *nod)
{
    suc = nod->right;
    parsuc = nod;
    while (suc->left != NULL)
    {
        parsuc = suc;
        suc = suc->left;
    }
    delete_one(suc, parsuc);
    if (par != NULL)
    {
        if (nod == par->left)
            par->left = suc;
        else
            par->right = suc;
    }
    else
    {
        root = suc;
    }
    suc->left = nod->left;
    suc->right = nod->right;
}
void deletenode(int key)
{
    struct tnode *temp;
    searchtree(key);
    if (root == NULL || node == NULL)
        printf("\n NO NODE IS FOUND!!");
    else
    {
        if (node->left != NULL && node->right != NULL)
            delete_two(node);
        else
            delete_one(node, par);
        free(node);
        printf("\n %d deleted from the tree \n\n", key);
    }
}
