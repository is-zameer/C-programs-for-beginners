#include <stdio.h>
int main()  {
    int a[10][10], i, j, n, symmetric =1;
    printf("Enter order of squre matrix: ");
    scanf("%d", &n);
    printf("Emter matrix elements: \n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)  {
            if(a[i][j] != a[i][j])  {
                symmetric =0;
                break;
            }
        }
    }
    if(symmetric)
        printf("Matrix is symmetrix.\n");
    else
        printf("Matrix is not symmetric.\n");
    return 0;
}