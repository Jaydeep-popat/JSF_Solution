//Write a C program to calculate the sum of digits of a number using iterative control statements.
#include<stdio.h>
void main(){   
    
    printf("enter a number to calculate the sum of its digits: ");
    int n;
    scanf("%d",&n);

    int sum=0;

    while(n>0){
        int rem= n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
}