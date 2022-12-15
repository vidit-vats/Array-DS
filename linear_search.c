#include <stdio.h>
int main()
{
    int flag,ele,a[100],n,i,pos;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("\nEnter Elements: -\n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\nEnter the element you want to search: ");
    scanf("%d",&ele);

    for (i=0;i<n;i++)
    {
        if (ele==a[i])
        {
            pos=i;
            flag=1;
            break;
        }
    }
    if (flag==1)
    printf("Element found at position no %d\n",pos);

    else
    printf("Element not found\n");
    return 0;
}