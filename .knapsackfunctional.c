#include<stdio.h>
void swap(float *x,float *y)
{
    float temp = *x;
    *x =*y;
    *y = temp;
}
void knapsack(int n, float w[],float p[],float size)
{
    float arr[50],v;
    int j,i,s;
    s=size;
    for(i=0; i<n; i++)
    {
        arr[i]=0.0;
    }
    for(i=0; i<n; i++)
    {
        if(w[i]>s)

            break;
        else
        {
            arr[i]=1.0;
            v=v+p[i];
            s=s-w[i];
        }
    }
    if(i<n)
    {
        arr[i]=s/w[i];
        v=v+(arr[i]*p[i]);
        printf("result:");
        for(i=0; i<n; i++)

            printf("\n%.2f",arr[i]);

        //printf("\n%.2f",arr[i]);
    }
    printf("\nmax profit:%.2f",v);

}
void main()
{
    float  w[50],p[50],size,r[50];
    int i,j,n;
    printf("Enter item:");

    scanf("%d",&n);
    printf("Enter weight:");
    for(i=0; i < n; i++)

    {
        scanf("%f", &w[i]);

    }
    printf("Enter profit:");
    for(i=0; i < n; i++)

    {
        scanf("%f",&p[i]);
    }

    printf("Enter size:");
    scanf("%f",&size);
    for(i=0; i<n; i++)
    {
        r[i]=p[i]/w[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(r[i]<r[j])
            {
                swap(&r[j],&r[i]);
                swap(&w[j],&w[i]);
                swap(&p[j],&p[i]);
            }
        }
    }
    knapsack(n, w, p, size);


}
