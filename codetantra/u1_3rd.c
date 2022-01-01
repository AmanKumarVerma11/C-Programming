/* Ques: Design and develop a flowchart or an algorithm that takes three coefficients
(a,b,and c) of a Quadratic equation(ax2+bx+c=0) as input and compute all possible roots.
Implement a C program for the developed flowchart/algorithm and execute the same to output 
the possible roots for a given set of coefficients with appropriate messages.  */

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,D,r1,r2;
    printf("Enter coefficients a, b and c : ");
    scanf("%f %f %f",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D>0)
    {
        printf("The roots are real and distinct\n");
        r1= (-b+sqrt(D))/(2*a);
        r2= (-b-sqrt(D))/(2*a);
        printf("root1 = %f and root2 = %f\n",r1,r2);
    }
    if(D<0)
    {
        printf("The roots are real and imaginary\n");
        r1= -b /(2*a);
        r2= sqrt(fabs(D))/(2*a);
        printf("root1 = %f+i%f\n",r1,r2);
        printf("root2 = %f-i%f\n",r1,r2);
    }
    if(D==0)
    {
        printf("The root are real and equal\n");
        r1=r2= -b /(2*a);
        printf("root1 = root2 = %f\n",r1=r2);
    }
  return 0;
}