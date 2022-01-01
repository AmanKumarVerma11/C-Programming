/* Ques: Write a program to receive marks of physics, chemistry & maths 
from user & check its eligibility for course if
a)Marks of physics >= 40
b)Marks of chemistry >= 50
c)Marks of math’s >= 60
d)Total of physics & math’s marks >= 150 or
e)Total of three subjects marks >= 200    */

#include<stdio.h>

int main()
{
    int P,C,M,MP,T;
    printf("Eligibility Criteria :\n");
    printf("Marks in Physics >= 40\n");
    printf("Marks in Chemistry >= 50\n");
    printf("Marks in Math's >= 60\n");
    printf("Total marks in all three subject >= 200\n");
    printf("Total marks in Math's & Physics >= 150\n");
    printf("Input the marks obtained in Physics : ");
    scanf("%d",&P);
    printf("Input the marks obtained in Chemistry : ");
    scanf("%d",&C);
    printf("Input the marks obtained in Mathematics : ");
    scanf("%d",&M);
    printf("Total marks of Maths,Physics and Chemistry : %d\n",P+C+M);
    printf("Total marks of Maths and Physics : %d\n",M+P);

    if((P>=40) && (C>=50))
    if((M>=60)&&(M+P>=150)||(P+C+M>=200))
    printf("The candidate is eligible for admission.\n");
    else
    printf("The candidate is not eligible.\n");
    else
    printf("The candidate is not eligible.\n");

   return 0;
}