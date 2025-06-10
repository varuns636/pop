#include<stdio.h>
#include<math.h>
int cube(int a)
{
    return a*a*a;
}
int  main()
{
    int a=2;
    int c=cube(a);
    printf("the cube of %d = %d",a,c);
    return 0;
}