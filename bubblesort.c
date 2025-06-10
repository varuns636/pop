#include<stdio.h>
int main()
{
    int a[50],n,i,j,temp;
    printf("Enter numbers of elements \n");
    scanf("%d",&n);
    printf("Enter the values \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("storted array in descending order ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    printf("storted array in ascending order ");
    for(i=n-1;i>=0;i--)
    printf("%d\t",a[i]);
    printf("\n");
    return 0;
}