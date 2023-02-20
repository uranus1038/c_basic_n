#include <stdio.h>
char a ;
int functionX(int,int );
int main ()
{
	printf("Enter value number :");
	scanf("%d",&a);  
	printf("Display value number a : %c",a);
	printf("Square value %c",functionX(a,a));
	return 0 ;
}
int functionX(int aa,int bb)
{
	return aa*bb ; 
}
