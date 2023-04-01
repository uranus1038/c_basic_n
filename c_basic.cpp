#include <stdio.h>
int user[] ; 
char nStar[] = {'M','a','r','s'} ;
int connectServer(int maxPlayer , int);
int main()
{
	connectServer(4 , 1);
}
int connectServer(int maxPlayer , int num)
{
		user[num] = num;
}
