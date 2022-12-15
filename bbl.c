#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int mid,ele,low,high,a[100],i,j,n,temp,pos;
    printf("Enter n: ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\nArray: -\n");
    for (i=0;i<n;i++)
    printf("%d ",a[i]);

    printf("\n");

    // code for bubble sort 
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nArray after Sorting: ");
    
    for (i=0;i<n;i++)
    printf("%d ",a[i]);
    
    return 0;
}