#include<stdio.h>
#include<conio.h>
void main(){
  int a=10,b=20;
  printf("Before swapping a="&a ,"and b=",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swapping a="&a ,"and b=",&b);
}
