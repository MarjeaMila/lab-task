#include<stdio.h>
void coin_change(int cn[],int n)
{
    int x,i,j;
    for(i=1;i<n;i++)
    {
        x= cn[i];
        j=i-1;
        while(j>=0 && cn[i]<x)
        {
            cn[j+1]=cn[i];
            j=j-1;
        }
        cn[j+1]=x;
    }
}
void main()
{
    int a,i,tk,n;
    int cn[50];
    printf("\nEnter number:\n");
    scanf("%d",&n);
    printf("\nEnter coins;\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&cn[i]);
    }
    coin_change(cn,n);
    printf("\nEnter amount\n:");
    scanf("%d",&tk);
    printf("\nMinimum used coin:\n");
    for(i=0;i<n;i++)
    {
        if(cn[i]<=tk)
        {
            a = tk/cn[i];
            printf("\nTotal used coin = %d coin %d times\n",cn[i],a);
            tk = tk % cn[i];
        }
    }


}
