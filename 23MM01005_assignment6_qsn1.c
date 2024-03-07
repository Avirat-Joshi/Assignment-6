#include<stdio.h>
void check_prime(int n)
{
    int counter=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            counter++;
    }
    if(counter==2)
        printf("%d, ",n);
}
int main()
{
    int l,u;
    printf("Input lower limit: ");
    scanf("%d",&l);
    printf("Input upper limit: ");
    scanf("%d",&u);
    for(int i=l;i<u;i++)
    {
        check_prime(i);
    }
    return 0;
}