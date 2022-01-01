#include<stdio.h>
#include<conio.h>
int main()
{
struct hotel
{
char name[20];
char city[10];
char grade;
int rc,nr;
};
struct hotel ht[20],t;
int i,n,j,c;
char gr;
int clrscr();
printf(" Enter no. of hotels\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter name of hotel \n");
scanf("%s",&ht[i].name);
printf("enter name of city \n ");
scanf("%s",&ht[i].city);
printf("enter the grade \n");
scanf("%s",&ht[i].grade);
ht[i].grade=getche( );
printf("Enter room charge \n");
scanf("%d",&ht[i].rc);
printf("Enter no of rooms \n");
scanf("%d",&ht[i].nr);
}
for(i=0;i<n;i++)
for(j=0;j<n-i;j++)
{
t=ht[j];
ht[j]=ht[j+i];
ht[j+1]=t;
}
printf("Enter a grade to print the hotels \n");
gr=getche();
int clrscr();
printf("hotel name city grade roomcharge no of room\n");
for(i=0;i<n;i++)
if(gr==ht[i].grade)
printf("%s %s %c %d %d",ht[i].name,ht[i].city,ht[i].grade,ht[i].rc,ht[i].nr);
getch();
printf("Enter a room charge to print hotels less than given charge \n");
scanf("%d",&c);
printf("hotel name city grade roomcharge no of rooms");
for(i=0;i<n;i++)
if(c<=ht[i].rc)
printf("%s %s %c %d %d",ht[i].name,ht[i].city,ht[i].grade,ht[i].rc ,ht[i].nr);
}