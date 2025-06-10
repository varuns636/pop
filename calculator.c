#include <stdio.h>

void main()
{
    char op;
    float a,b,res;
    printf("Enter the operator\n");
    scanf("%c",&op);
    printf("enter the 2 operands\n");
    scanf("%f %f",&a, &b);
    switch(op)
    {
        case'+':res=a+b;
        break;
        case'-':res=a-b;
        break;
        case'*':res=a*b;
        break;
        case'/':   
                 if (b!=0)
                 res=a/b;
                 else   
                 { 
                 printf("Division not possible by 0");
                
                }
        break;
        default:printf("invalid operator\n");
     
    }
    printf("Result = %f \n",res);
}