#include<stdio.h>
int divide(int dividend,int divisor)
 {
         if( divisor == 0)    return -1;
         if( divisor == -2147483648 && dividend == -2147483648)        return 1;
         if( divisor == -2147483648 )   return 0; 
         if( dividend == -2147483648 && divisor == -1 )   return 2147483647;
         unsigned int temp;
         short s = 0;
         if((unsigned)dividend == (unsigned)1<<31)
         {
                 temp = (unsigned)dividend;
                 s = 1;
         }
         else if(dividend < 0)
         {
                 temp = -dividend;
                 s = 1;
         }
         else    temp = dividend;
         if(divisor < 0)
         {
                 divisor = -divisor;
                 s -= 1;
         }
         unsigned int divisor0 = divisor;
         int i;
         unsigned int sum = 0;
         while(temp >= divisor0)
         {       
                 for(i = 1; divisor0<<(i-1) != temp && temp>=divisor0<<i;i++);	//在对希望通过夹逼获得一个特定量时，要防止上界越界
                 sum += (unsigned)1<<(i-1);
                 temp -= divisor0<<(i-1);
         }
         return s?(int)(-sum):(int)sum;
 } 
int main(void)
{
	printf("%d",divide(-2147483648,2));
	return 0;
}
//感想 (unsigned)1<<31 == -2147483648
//	注意几点：	上面unsigned的是1是先把1变为无符号数再移位
//			是1移位31位而不是2移位31位，2应该移30位
//			同时对变量移位也要把变量变成正数，再变成无符号数再移
//			无符号数和有符号数的比较是无意义的
//对于题目所给的变量名，要么查单词然后牢记于心，要么换变量名，不然抄错了就麻烦了
//对与2^31规模的遍历是行不通的，无论是什么语言
//在对希望通过夹逼获得一个特定量时，要防止上界越界
