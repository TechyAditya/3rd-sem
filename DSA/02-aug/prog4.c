//check 2 matrices
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3];
    printf("Enter elements of first 3x3 matrix: ");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second 3x3 matrix: ");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);
    
    //processing all elements of matrices
    int match = 1;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            if(A[i][j] != B[i][j])
            {
                match = 0;
                break;
            }
        }
    
    if(match)
        printf("Both the matrices are equal");
    else
        printf("Both the matrices are not equal");

    return 0;
}