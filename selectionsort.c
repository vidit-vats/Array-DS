#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[10],i,j,n,min,temp;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter Elements: - \n");

    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\n");

    printf("Array: ");
    for (i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");

    

    for (i=0;i<n;i++)
    {
        min=a[i]; 
        for (j=0;j<n;j++)
        {
            if (min>a[j])
            {
                min=a[j];
                temp=a[i];
                a[i]=min;
                a[j]=temp;
            }
        }
    }
    printf("\n");
    // array is sorted in descending order
    printf("Sorted Array: ");
    for (i=0;i<n;i++)
    printf("%d ",a[i]);
    
    return 0;
}