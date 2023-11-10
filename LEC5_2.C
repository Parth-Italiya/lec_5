#include<stdio.h>
#include<conio.h>

void main(){
int a;
clrscr();
printf("enter value of A: ");
scanf("%d",&a);

if(a>0){
printf("a is positive");
}else if(a<0){
printf("a is negative");
}else {
printf("a is neutral");
}
 getch();
}