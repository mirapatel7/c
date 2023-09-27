#include<stdio.h>
void main(){
int p,t;
float si,r;
printf("\nEnter the value of principle : ");
scanf("%d",&p);
printf("\nEnter the time period : ");
scanf("%d",&t);
printf("\nEnter the rate of interest : ");
scanf("%f",&r);
si=(p*t*r)/100;
printf("\nSimple interest : %f",si);



}
