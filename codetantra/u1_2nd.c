/* Ques: Write a program to calculate the Net Salary of an employee. Where the basic salary of an employee is input through the keyboard. 
The DA is 25% of the basic salary while the HRA is 15% of the basic salary. 
Provident Fund is deducted at the rate of 10% of the gross salary (BS+DA+HRA). */

#include<stdio.h>

int main()
{
    float BS,DA,HRA,Net_salary,GS;
    printf("Enter Basic Salary : ");
    scanf("%f",&BS);
    DA=(BS*25)/100;
    HRA=(BS*15)/100;
    GS=BS+DA+HRA;
    Net_salary=GS-((GS*10)/100);
    printf("Net Salary is : $%.02f\n",Net_salary);
    return 0;
}
