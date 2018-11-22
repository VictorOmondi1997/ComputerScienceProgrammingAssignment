/*Using a function, write a program that finds the average of two integers*/

#include <stdio.h>
#include <stdlib.h>

float average(int a, int b){
    return (float)(a+b)/2;
}
int main()
{
    int num1, num2;
    float avg;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    avg = average(num1, num2);

    //%.2f is used for displaying output upto two decimal places
    printf("Average of %d and %d is: %.2f",num1,num2,avg);

    return 0;
}
