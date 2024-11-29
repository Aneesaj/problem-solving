/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char A[] = "PROGRAM";
    int n = strlen(A);//7

    for (int i =0; i <n; i++) 
    {
        for (int j = 0; j < n; j++) //i=0,j=0//i=0,j=1
        {
            if (i == j) 
            {
                printf("%c", A[i]);//A[0]
            } else if (i + j == n - 1) 
            {//0+1=1==6
                printf("%c", A[j]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}