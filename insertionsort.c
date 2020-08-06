#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Size : ");
    scanf("%d",&n);
    int a[100];
    printf("Enter data : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k,j;
    for(j=0; j<n; j++)
    {
        k=a[j];
        i=j-1;
        while(i>=0 && k<a[i])
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=k;
    }
    printf("Insertion Sorted list in Ascending : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
