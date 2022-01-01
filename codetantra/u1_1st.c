/* Ques:Write a program to find the area of a triangle using Heron's formula.

During execution, the program should print the following message on the console:
enter sides : 
For example, if the user gives the following as input:
enter sides : 2.3 2.4 2.5
Then the program should print the result as:
area : 2.485477
Note: Use the printf() function with a newline character (\n) at the end.

The area of a triangle is given by Area = √ p(p − a)(p − b)(p − c), where p is half of the perimeter,
or (a + b + c) / 2. Let a,b,c be the lengths of the sides of the given triangle.  */

#include<stdio.h>
#include<math.h>

main()
{
    float p,a,b,c,Area;
    printf("enter sides : ");
    scanf("%f %f %f",&a,&b,&c);
    p=(a+b+c)/2;
    Area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("area : %f\n",Area);
}
