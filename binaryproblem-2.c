#include<stdio.h>
void main()
{
    int n,i,p[50];
    printf("Enter size :");
    scanf("%d",&n);
    printf("\nEnter product code :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
    }
   int l,r,m,y;
    l=0;
    r=n-1;
    m=(l+r)/2;
    printf(" \nEnter search code:");
    scanf("%d",&y);
    while(l<=r)
    {
        if(y<p[m])
        {
            r=m-1;
        }
         else if(y>p[m])
        {
            l=m+1;
        }
        else if(y==p[m])
        {
            printf("\nFound the position of product is :%d",m);
            break;
        }
        m=(l+r)/2;
        if(l>r)
        {
            printf("Product not available");
        }
    }

}

