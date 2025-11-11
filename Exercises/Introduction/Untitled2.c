#include<stdio.h>
int main()
{
    float first_num , second_num , third_num , total;

    printf("Enter the first number ->");
    scanf("%f",&first_num);
    printf("Enter the second number ->");
    scanf("%f",&second_num);
    printf("Enter the third number ->");
    scanf("%f",&third_num);

    total = first_num + second_num +third_num ;

    printf("\n\n The sum is %.3f\n\n", total);


}
