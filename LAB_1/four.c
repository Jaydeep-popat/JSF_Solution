//Write a C program to reverse a number using repetition statements. (A)

 #include<stdio.h>
void main(){   

    int n;  
    printf("enter a number to reverse it: ");
    scanf("%d",&n);

    int rev=0;

   
    while(n!=0){
        rev=(rev*10)+(n%10);
        n/=10;
    }

    printf("%d",rev);
}