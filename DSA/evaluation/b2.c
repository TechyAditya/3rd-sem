#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

TreeNode *build(int *array, int size)
{
    if (size == 0)
        return NULL;
    else
    {
        TreeNode *root = (TreeNode *)malloc(sizeof(TreeNode));
        int i, j, mid;
        int swap = 1;

        j = size - 1;
        while (swap)
        {
            swap = 0;
            for (i = 0; i < j; ++i)
            {
                if (array[i] > array[i + 1])
                {
                    int temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    swap = 1;
                }
            }
            --j;
        }
        root->val = array[mid = size / 2];
        root->left = build(array, mid);
        root->right = build(array + mid + 1, size - mid - 1);
        return root;
    }
}

void print(TreeNode *p)
{
    if (p)
    {
        print(p->left);
        printf("%d ", p->val);
        print(p->right);
    }
}

void printPostorder(struct Treenode *node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);

    printPostorder(node->right);

    printf("%d ", node->data);
}

void printInorder(struct Treenode *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    printf("%d ", node->data);

    printInorder(node->right);
}

void printPreorder(struct Treenode *node)
{
    if (node == NULL)
        return;

    printf("%d ", node->data);

    printPreorder(node->left);

    printPreorder(node->right);
}

int main()
{
    int a[] = { 6, 9, 5, 2, 8, 15, 24, 14, 7, 17, 1, 11};
    struct TreeNode *root = build(a, 12);
    print(root);

    // Inorder
    printInorder(root);

    // Preorder
    printPreorder(root);

    // PostOrder
    printPostorder(root);

    return 0;
}