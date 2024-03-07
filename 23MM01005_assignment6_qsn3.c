#include<stdio.h>
void rev(int a[],int n,int i)
{
    if(i==n)
        return;
    else    
        {
            rev(a,n,i+1);
            printf("%d, ", a[i]);
        }    
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
    rev(a,n,0);    
    return 0;
}