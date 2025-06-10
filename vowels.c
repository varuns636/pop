#include <stdio.h>
int main()
{
    char ch;
    printf("enter a letter \n");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Entered letter is %c which is an vowel \n and its acsii value is %d",ch,ch);
    }
    else 
    {
        printf ("Entered letter is %c which is an consonant \n and its acsii value is %d",ch,ch);
    }
}