/*Example 5: Write the algorithm and flowchart of a 
C program that prints on the screen whether an entered number x is exactly divided by an entered number y.*/
#include<stdio.h>
int main(){
int x,y;

printf("Enter two numbers:\n");
scanf("%d%d",&x,&y);

if(x%y==0)
printf("%d is exactly divisible by %d.\n",x,y);
else
printf("%d is not exactly divisible by %d.\n",x,y);	
	
	return 0;
}
