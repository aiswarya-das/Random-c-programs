/* To find the sum  of digits of a number */

#include<stdio.h>
int main () {
int num,sum;
printf("Enter a number : ");
scanf("%d",&num);
sum = 0;
while (num>0)
{
    sum = sum + num % 10;
    num/= 10 ;
}
printf("Sum of digits is %d\n",sum);

}







 /* Output :
Enter a number : 4356
Sum of digits is 18 */