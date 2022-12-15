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
    // bubble sort ended here 
    printf("\nSorted Array: -\n");

    for (i=0;i<n;i++)
    printf("%d ",a[i]);

printf("\nEnter the element you want to search: ");
scanf("%d",&ele);


// code for binary search starts here
low=0;
high=n-1;
mid=(low+high)/2;
pos=mid;

while(low<=high)
{
    if (ele==a[mid])
    {
        pos=mid;
        printf("\nElement found at position %d\n",pos);
        exit(1);

    }

    else if (ele>a[mid])
    {
        low=mid+1;
        high=n-1;
        mid=(low+high)/2;
    }

    else if (ele<a[mid])
    {
        low=0;
        high=mid-1;
        mid=(low+high)/2;
    }
}

// code for binary search ends here
    return 0;
}