#include<stdio.h>
void main() {
int h,m,s;
printf("enter the value of second : ");
scanf("\n%d",&s);
h=s/3600;
s=s-(h*3600);
m=s/60;
s=s-(m*60);
printf("\n time :%d:%d:%d",h,m,s);

}
