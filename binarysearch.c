#include<stdio.h>
void main()
{
    int n,i,x[50];
    printf("Enter size:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
   int l,r,m,y;
    l=0;
    r=n-1;
    m=(l+r)/2;
    printf("Enter Search Element:");
    scanf("%d",&y);
    while(l<=r)
    {
        if(y<x[m])
        {
            r=m-1;
        }
         else if(y>x[m])
        {
            l=m+1;
        }
        else if(y==x[m])
        {
            printf("Location is :%d",m);
            break;
        }
        m=(l+r)/2;
        if(l>r)
        {
            printf("not found");
        }
    }

}
