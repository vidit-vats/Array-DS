#include <stdio.h>
int main()
{
    int a[100],pos,n,i;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter Elements:-\n");

    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Array: ");

    for (i=0;i<n;i++)
    printf("%d ",a[i]);

    //deletion code starts here 
    printf("\n");

    printf("Enter the index you want to delete from 0 to %d: ",n-1);
    scanf("%d",&pos);

    for (i=pos;i<n-1;i++)
    a[i]=a[i+1];
    a[n-1]=0;

    printf("\n");

    printf("Array after Deletion:- \n");

    for (i=0;i<n-1;i++)
    printf("%d ",a[i]);

    return 0;
}