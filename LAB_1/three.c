//Write a C program to find the factorial of a given number using iteration. (A) 
#include<stdio.h>
void main(){   

    int n;  
    printf("enter a number to calculate the factorial of the number: ");
    scanf("%d",&n);

    int ans=1;

    for(int i=1;i<=n;i++){
        ans=ans*i;
    }

    printf("%d",ans);
}