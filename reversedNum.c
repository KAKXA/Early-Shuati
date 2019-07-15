#include<stdio.h> 
#include<stdbool.h>
int  newPow(int x,int y)
{
	int temp = 1;
	if(y == 0)
	{
		return 1;
	}
	else
	{
		for(int i=1;i<=y;i++)
		{
			temp *= x;	
		}
		return temp;
	}
}

int apple(int x)
{
	if(x<0)	return 0;
	int num;
	for(num=1;num<11;num++)
	{
		if(num == 10 || !(x/(int)newPow(10,num)))	break;
	}
	for(int i = 1;i<=(num/2);i++)
	{
		if( (int)((x%((int)newPow(10,i)))/(int)(newPow(10,i-1))) != (int)((x/(int)(newPow(10,num-i)))%10 ))	return false; 
	}
	return 1;
}
int main(void)
{
	int x = 1000000001;
	printf("%d",apple(x));
	return 0;
}

//1.pow函数在用于10的次方时需要重写，不然发生整数部分丢失；
//2.ACM使用32位计算机，10^10会发生越界；
