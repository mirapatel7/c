//swap two numbers.
#include<stdio.h>
void main() {
int a,b,temp;
printf("enter the value of a and b :");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\nb:%d ",a);
printf("\na:%d ",b);
}
