#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10],i,j,n,temp,k;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("\nEnter Elements: -\n");

    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\nArray: ");

    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    printf("\n");

    // code for insertion sort starts here
    //i=1 is taken because we treat that
    // a[0] is already sorted
    
    for (i=1;i<n;i++)
    {
        k=i;
        temp=a[i];
        for (j=i-1;j>=0;j--)
        {
            if (temp<a[j])
            {
                a[k]=a[j];
                k--;
            }
        }
            a[k]=temp;
    }
    printf("\nNew Array: ");

    for (i=0;i<n;i++)
    printf("%d ",a[i]);

    return 0;
}