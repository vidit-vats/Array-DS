#include <stdio.h>
int main()
{
    int a[100],i,pos,n,ele;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("\nEnter Elements:-\n");

    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\nArray: ");
    
    for (i=0;i<n;i++)
    printf("%d ",a[i]);

    printf("\n");

    // code for insertion starts here
    printf("Enter the element and the position where you want to insert: ");
    scanf("%d%d",&ele,&pos);


    for (i=n;i>pos;i--)
    a[i]=a[i-1];


    a[pos]=ele;
    printf("\nNew Array: ");

    for (i=0;i<=n;i++)
    printf("%d ",a[i]);

    return 0;
}