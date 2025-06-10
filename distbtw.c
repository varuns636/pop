#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,d,a,b;
    printf("Enter cordinates for x1 y1 x2 y2= \n");
        scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
        a=x2-x1;
        b=y2-y1;
        d=sqrt(pow(a,2)+pow(b,2));
        printf("The distance is = %f \n",d);
    return 0;
}