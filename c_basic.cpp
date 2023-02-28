#include <stdio.h>
int a ;
int sum(int);
int main()
{
	printf("%d",sum(5));
}
int sum(int num)
{
	switch(num)
	{
		case  5 : return num+5 ; break ; 
	}
}
