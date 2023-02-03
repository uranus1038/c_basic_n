#include <stdio.h>
int a = 10 ;
int functionX(int ,int );
int main ()
{
	functionX(11,15);
	functionX(11,16);
	functionX(11,17);
}
int functionX(int aa ,int bb)
{
	printf("add = %d" ,aa*bb);
}
