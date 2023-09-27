//write a program to find largest number between three numbers.
#include<stdio.h>
void main() {
int a,b,c;
printf("Enter a : ");
scanf("%d",&a);
printf("Enter b : ");
scanf("%d",&b);
printf("Enter c : ");
scanf("%d",&c);
if(a>b && a>c) {
	printf("%d is largest",a);
}
	else if(b>a && b>c) {
	printf("%d is largest",b);
}
	else {
	printf("%d is largest",c);
}
}
