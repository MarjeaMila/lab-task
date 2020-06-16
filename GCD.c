#include<stdio.h>
int GCD(int a, int b)
{
    if(b!= 0)
        {
            return GCD(b,(a%b));
        }
    else
        {
        return a;
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD is= %d",GCD(a,b));
}
