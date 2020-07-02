#include<stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a= *b;
    *b=t;
}
 int x[50];
void quick(int f,int l)
{
    // int x[50];
    int i,j,n;
    if(f<l)//f&l are index no.
    {

        //i,j are changing index no.
        i=f+1;
        j=l;
        while(x[i] < x[f])
        {
            i = i+ 1;
        }
        while(x[j] > x[f])
        {
            j = j - 1;
        }
        while (i <= j)
        {
            swap (&x[i] , &x[f]);
            while (x[i] < x[f])
            {
                i = i + 1;
            }
            while (x[j] > x[f])
            {
                j = j-1;
            }
        }
        swap(&x[j],&x[f]);
        quick(f , j-1);
        quick(j+1 ,l);
    }
}
int main()

{
    int  n,i,j;
    printf("Enter the number of n:");
    scanf("%d",&n);
    printf("Enter Unsorted number:");
    for(i=0; i<=n; i++)
    {
        //x[i]=i;
        printf("Enter Unsorted number:");
        scanf("%d",&x[i]);
        // quick(0, n-l);

    }
    quick(0, n-1);

      printf(" Sort Result : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", x[i]);
    }

return 0;
}



