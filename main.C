#include<stdio.h>
#include<conio.h>
int top=-1,stack[10];
void push(int n)
{
top++;
stack[top]=n;
}
void main()
{
 int i,n,num=4,t=5;
 clrscr();
 printf("\n\t\t\tNUMBER GUESSING GAME");
 printf("\n\n");
 printf("\tGUESS A NUBER BETWEEN 1-10");
 A:
 if(t==0)
 {
 printf("\n\t\tYOUR GUESSING ARE\n");
 for(i=top;i>=0;i--)
 {
  printf("%d\t",stack[i]);
  }
 printf("\n\t\tGAME OVER!");
 delay(3500);
 exit(0);
 }
 printf("\n\n\tENTER YOUR GUESSING NUMBER 1 TO 10:");
 scanf("%d",&n);
 push(n);
 if(n==num)
 {
 printf("\n\t\tYOUR GUESSING IS CORRECT\n\n");
 t=0;
 printf("\t\tYOU WON!!!\n");
 printf("\t\tYOU GUESS ARE:\t");
  for(i=top;i>=0;i--)
  {
  printf("%d\t",stack[i]);
  }
 delay(3500);
 exit(0);
 }
 else if(n>num)
 {
 printf("\n\t\tYOUR GUESSING IS GREATER\n");
 t--;
 goto A;
 }
 else
 {
 printf("\n\t\tYOUR GUESSING IS SMALLER\n");
 t--;
 goto A;
 }
 getch();
 }