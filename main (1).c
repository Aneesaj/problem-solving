/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i=i+2)
    {
        char temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
    }
    printf("%s",s);

    return 0;
}