#include<stdio.h>
void main()
{
    char name[20];
    int u;
    float charge,tcharge;
    printf("Enter the name of the user\n ");
    scanf("%s",&name);
    printf("Enter the units used \n");
    scanf("%d",&u);
    if(u>=0 && u<=200)
    {
        charge= u*0.80+100;
    }
        else if(u>200 && u<=300)
    {
        charge= 200*0.80+(u-200)*0.90+100;
    }
        else if(u>300)
    {
        charge= 200*0.80+(100)*0.90+(u-300)*1.00+100;
    }
        if(charge>400)
    {
        tcharge=charge*0.15;
        charge=tcharge+charge;
    }
    printf("User %s should pay %f as units used is %d",name,charge,u);
}
