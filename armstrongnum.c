/* To find whether a number is armstrong num or not */
/*An armstrong number = the sum of the cube of its digits */
#include<stdio.h>
int main () {
    int num,sum,temp,r;
    printf("Enter a 3-digit number : ");
    scanf("%d",&num);
    sum = 0;
    temp = num;
    while (num>0)
    {
        r = num%10;
        sum = sum + (r*r*r);
        num /= 10;
    }
    if (sum == temp)
    {
        printf("Yes, it is an armstrong number\n");
    }
    else
    {
        printf("It not an armstrong number\n");
    }
    
}
/* Output :
Enter a 3-digit number : 153
Yes, it is an armstrong number */