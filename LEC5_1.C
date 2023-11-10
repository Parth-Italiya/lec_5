#include<stdio.h>
#include<conio.h>

void main(){
 int a,b;
 clrscr();
 printf("enter A: ");
 scanf("%d",&a);
 printf("enter B: ");
 scanf("%d",&b);

 if(a<b){
 printf("a is minimum");
}
 else{
 printf("b is minimum");
 }

 getch();
}

