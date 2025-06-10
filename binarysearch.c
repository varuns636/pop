#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,a[20],low,high,mid,i,key;
printf("enter thesize of the array:\n");
scanf("%d",&n);
printf("enter the element to an array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key element to be searched:\n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("element found at location:%d\n",mid+1);
exit(0);
}
else if(key<a[mid])
high=mid-1;
else
low=mid+1;
}
printf("key not found\n");

}