#include <stdio.h>
int main()  {
    int a[100], n, i, min, max;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    printf("Enter Elements: ");
    for(i=0; i<n; i++)  
        scanf("%d", &a[i]);
    min = max = a[0];
    for(i=1; i<n; i++)  {
        if(a[i]<min) min = a[i];
        if(a[i]>max) max = a[i];
    }
    printf("Smallest = %d\n", min);
    printf("Largest = %d\n", max);
    return 0;
    
}