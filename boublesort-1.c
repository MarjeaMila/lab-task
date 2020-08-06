#include<stdio.h>
void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int n,i,j;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int a[100];
    printf("\n Enter Data :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]<a[j+1])
            {
                swap(&a[j+1],&a[j]);
            }
        }
    }
    printf("Bubble descending is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

