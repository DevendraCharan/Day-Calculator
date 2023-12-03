#include <stdio.h>
int main()
{
int d,m,y,n,a,l,x,f;
printf("Enter The Date ; \n");
scanf("%d-",&d);
printf("Entrer The Month Number : \n");
scanf("%d",&m);
printf("Enter The Year :\n");
scanf("%d",&y);
if (m==1)
n=1;
if (m==2)
n=4;
if (m==3)
n=4;
if (m==4)
n=0;
if (m==5)
n=2;
if (m==6)
n=5;
if (m==7)
n=0;
if (m==8)
n=3;
if (m==9)
n=6;
if (m==10)
n=1;
if (m==11)
n=4;
if (m==12)
n=6;
l=(y%100)/4;
x=d+y%100+n+l;
f=x%7;
if (n>=1900)
{
if (f==2)
printf("Monday");
if (f==3)
printf("Tuesday");
if (f==4)
printf("Wednesday");
if (f==5)
printf("Thursday");
if (f==6)
printf("Friday");
if (f==0)
printf("Saturday");
if (f==1)
printf("Sunday");
}
if (y>=2000)
{
if (f==3)
printf("Monday");
if (f==4)
printf("Tuesday");
if (f==5)
printf("Wednesday");
if (f==6)
printf("Thursday");
if (f==0)
printf("Friday");
if (f==1)
printf("Saturday");
if (f==2)
printf("Sunday");
}
	return 0;
}
