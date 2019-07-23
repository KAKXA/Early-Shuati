class _48_receiveWater{
    public int trap(int[] height) {
        int len = height.length;
        int[] temp = new int[len+1];
        System.arraycopy( height , 0 , temp , 0 , len );
        Arrays.sort(temp);
        int Sum = 0;
        int sum = 0;
        int lastNum = 0;
        for( int i = 1 ; i <= len ; i++)
        {
            sum += temp[i];
            if( temp[i] != temp[i-1] )
            {
                Sum += findAndSum( temp[i] , height , len, lastNum);
                lastNum = temp[i];
            }
        }
        return Sum - sum ;
    }
    public int findAndSum( int num , int[] height , int len , int lastNum)
    {
        int i,j;
        for( i = 0 ; i < len ; i++ )
        {
            if( height[i] >= num )  break;
        }
        for( j = len-1 ; j >= 0; j-- )
        {
            if( height[j] >= num )  break;
        }
        return (j-i+1)*(num-lastNum);
    }
}
//不是最优解，在做题之前要看清楚你要求的本质时什么，尽量抽象化，而不是照着题目描述强行解
//这一题，每一个数组下标处能存储的雨水数等于其左边柱子的最大值与右边柱子最大值中的最小值
//而我想的是对每种高度的柱子乘以坐标，更方便的是对每个坐标累加柱子
