#include <stdio.h>
int functionX(bool, int );
bool c=  false ;
int main ()
{
	functionX(true,7);
	return 0 ;
}
int functionX(bool aa , int bb)
{
	if(!aa)
	{
		printf("Beuatiful World\n");
	}else
	{
		printf("condition not found \n");
	}
	if(aa!=false && bb <8)
	{
			printf("console \n");
	}
}
