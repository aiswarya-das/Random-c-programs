/* To find the reverse of a given number */
#include<stdio.h>
int main() {
    int n,rev;
    printf("Enter a number : ");
    scanf("%d",&n);
    rev = 0;
    while (n>0)
    {
        rev = rev * 10 + n % 10;
        n/= 10 ;
    }
    printf("Reverse is %d\n",rev);
    

}

/*
Output :
Enter a number : 1234
Reverse is 4321 */