//Write a C program to display a simple star pattern using nested iterative statements. (A)

 #include<stdio.h>
void main(){   

    int n;  
    printf("enter the value of N: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
}