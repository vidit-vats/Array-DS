#include <stdio.h>
#include <stdlib.h>
int n;
void insertarr(int a[]);
void deletearr(int a[]);
void traversearr(int a[]);
int main()
{
    int ch,a[100],i,pos,ele;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter Elements:-\n");
    
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    while(1)
    {
        printf("Select from the following options:-\n");
   
        printf("1)Traverse\n2)Insertion\n3)Deletion\n4)Exit\nChoice: ");
        scanf("%d",&ch);
        printf("\n\n");
   
        switch(ch)
        {
            case 1:
            traversearr(a);
            break;

            case 2:
            insertarr(a);
            break;

            case 3:
            deletearr(a);
            break;

            case 4:
            exit(1);

            default:
            printf("Error!\n");
        }
    }
    
    return 0;
}

    void traversearr(int a[])
    {
        printf("Array: ");
        int i;

        for (i=0;i<n;i++)
        printf("%d ",a[i]);

        printf("\n");
    }

    void insertarr(int a[])
    {
        int i,pos,ele;
        printf("Enter the element and the position where you want to insert: ");
        scanf("%d%d",&ele,&pos);


            for (i=n;i>pos;i--)
            a[i]=a[i-1];


        a[pos]=ele;
        printf("\nNew Array: ");

            for (i=0;i<=n;i++)
            printf("%d ",a[i]);

            printf("\n");
            n=n+1;
    }

    void deletearr(int a[])
    {
        int i,pos;
            printf("Enter the index you want to delete from 0 to %d: ",n-1);
            scanf("%d",&pos);

                for (i=pos;i<n-1;i++)
                a[i]=a[i+1];
                
                a[n-1]=0;

                    printf("\n");

            printf("Array after Deletion:- \n");

                for (i=0;i<n-1;i++)
                printf("%d ",a[i]);

                n=n-1;

                printf("\n");
    }
