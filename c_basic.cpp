#include <stdio.h>
int a = 10 , b ;
int functionX(int,int );
int main ()
{
	printf("%d",functionX(10,10));  
	return 0 ;
}
int functionX(int aa,int bb)
{
	return aa*bb ; 
}
