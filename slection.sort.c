#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
   * b = temp;
}
int x[50];
void selection_sort( int x[],int n)
{
    int i,j,f ; //min index=f
    for(i=0; i<n-1; i++)
    {
        f=i;
        for(j=i+1; j<n; j++)
        {
            if(x[j]<x[f])
            {
                f=j;
            }
            if(f!=i)
            {
                swap(&x[f],&x[i]);
            }
        }
    }
}
void main()
{
    int i,j,n;
    //int x[50];
    printf("Enter the number of n:");
    scanf("%d",&n);
    printf(" Unsorted Series:");
    for(i=0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    selection_sort( x , n);
    printf(" Sort Result:");
    for (i = 0; i < n; i++)
    {
        printf(" %d", x[i]);

    }

    return 0;
}
