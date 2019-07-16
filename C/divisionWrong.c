#define CONST (1<<31) 
int dividing(int dividend, int divisor,int start);
int mul(int a,int b);
int divide(int dividend, int divisor)
{
    if(divisor == 0)    return -1;
    if(dividend<divisor&&dividend>0&&divisor>0
      || dividend>divisor&&dividend<0&&divisor<0
      || dividend == 0)   return 0;
    int temp,i,j;
    temp = dividend>0?dividend:-dividend;
    for(i = 30;i>0;i--)
    {
        if( (temp&(1<<i)) != 0 )  break;
    }
    temp = divisor>0?divisor:-divisor;
    for(j = 30;j>0;j--)
    {
        if( (temp&(1<<j)) != 0)   break;
    }
    return dividing(dividend,divisor,1<<(i-j == 0 ? 0 : i-j-1));      
}
int dividing(int dividend, int divisor,int start) 
{
    if(dividend<0&&divisor>0||dividend>0&&divisor<0)
    {
        for(int i = -start; i >= CONST ; i--)
        {
            if(dividend>0)  if(dividend<mul(divisor,i)) return i+1;
            else if(dividend>mul(divisor,i)) return i+1;
        }
    }
    else
    {
        for(int i = start; i <= CONST-1 ; i++ ) ///！！！！！
        {
            if(dividend>0)
            {
                if(dividend<mul(divisor,i)) return i-1;
            }
            else
            {
                if(dividend>mul(divisor,i)) return i-1;
            }
        }
    }
    return 123;
}
int mul(int a,int b)
{
    int temp=0;
    for(int i=0;i<b;i++)    temp += a;
    return temp;
}
int main(void )
{
	printf("%d",divide(1011341342,1));
}
//同division.c,也是leetcode 29题，因为要遍历的数太多，耗时过长，故废弃；
//宏定义时不能加等号和分号，尤其时由C++和C直接变过来时一定要注意宏定义，出现的错误提示为 expect expression "=/;" before "..." token
//因为最大的int是int(-((unsigned)1<<31+1)),即2147483647,背下来。最小的负数是-2147483648
