#include<stdio.h>
int main(){
    char str[]="hello";
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("length of the string:%d\n",len);
}