#include<stdio.h>
int* cow(int *);
static int a[] = {1,0,0};
int n;
int temp[50] = {0};
int main(void)
{
	for(int i = 0; i<51 ; i++)
	{
		scanf("%d",&temp[i]);
		if(!temp[i])	break;
			}	
	for(int i = 0; temp[i] ; i++ )
	{
		n = temp[i];
		if(n == 1)	printf("1\n");
		else	cow(a);
		printf("%d\n",2*(*a) + *(a+1) +*(a+2) );
		a[0] = 1;
		a[1] = 0;
		a[2] = 0;
	}
}
int* cow( int* x )
{
	if( n == 2 )	return a;	
	else
	{
		int b[3];
		n--;
		b[0] = x[0] + x[1];
		b[1] = x[2];
		b[2] = x[0];
		a[0] = b[0];
		a[1] = b[1];
		a[2] = b[2];
		return cow(a);
	}
}
//写递归题的时候，最好能直接看出递归关系，如果不能，看下一项本质是怎么由上一项推出来的，但仅仅这样还不够，可以看这一项又是怎么有上上项推出来的，看是否有简单的递归关系；
//此题更简单的方法为每一年的母牛数是前一年和三年前的母牛数的和（可以追根溯源地求出)
