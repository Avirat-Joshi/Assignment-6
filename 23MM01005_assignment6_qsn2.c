#include<stdio.h>
void fun(int p[],int n)
{   
    int sum=0;
    float avg;
    for(int i=0;i<n;i++)
        sum=sum+p[i];
    avg=sum/n;
    for(int i=0;i<n;i++)
        if(avg<p[i])
            printf("%d, ",p[i]);
}   
int main()
{
    int n;
    printf("Enter number of elements of an array ");
    scanf("%d",&n);
    printf("Enter elements of an array ");
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    fun(a,n);    
    return 0;
}