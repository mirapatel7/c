#include<stdio.h>
void main () {
int y,m,w,d;
printf("enter days : ");
scanf("%d",&d);
y=d/360;
d=d-(y*365);
m=d/30;
w=d-(m*30)/7;
printf("\n year :%d\n",y);
printf("\n month :%d\n",m);
printf("\n week :%d\n",w);
printf("\n days :%d",d); 
	

}
