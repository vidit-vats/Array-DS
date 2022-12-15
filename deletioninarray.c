#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],n,i,pos;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("\nEnter Elements: -\n");

    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\n");

    printf("Array: ");

    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    printf("\nEnter the position from %d to %d to delete: ",0,n-1);
    scanf("%d",&pos);

    for (i=pos;i<n-1;i++)
    a[i]=a[i+1];

    a[n-1]=0;
    n=n-1;
    printf("\nNew Array: ");
    for (i=0;i<n;i++)
    printf("%d ",a[i]);

    return 0;
}