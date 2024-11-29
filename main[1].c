/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

    
int getWeight(int n)
{
    int w=0;
    int root=sqrt(n);
    if(root*root==n)
    {
        w+=5;
    }
    if(n%4==0&&n%6==0)
    {
        w+=4;
    }
    if(n%2==0)
    {
        w+=3;
    }
    return w;
}
int main()
{
    int arr[100];
    int ws[100];
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
         ws[i]=getWeight(arr[i]);
    }
   
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ws[i]>ws[j])
            {
                int temp=ws[i];
                ws[i]=ws[j];
                ws[j]=temp;
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            else if(ws[i]==ws[j])
            {
                if(arr[i]>arr[j])
                {
                    int te=arr[i];
                    arr[i]=arr[j];
                    arr[j]=te;
                }
            }
        }
    }
    printf("\nAfter Sorting:\n");
    for (int i = 0; i < n; i++) {
        printf(" %d, %d\n", arr[i], ws[i]);
    }

    return 0;
}