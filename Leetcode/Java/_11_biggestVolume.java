class Solution {
    public int maxArea(int[] height) {
        int max = 0;
        int length = height.length;
        for( int i = 0 ; i < length ; i++)
        {
            int temp = getMax(i,height);
            if( temp > max )    max = temp;
        }
        return max;
    }
    public int getMax(int i , int[] height)
    {
        int length = height.length;
        int temp = 0 ;
        for( int j = 0 ; j < length ; j++)
        {
            if( height[j] >= height[i] )
            {
                int vol = height[i] * Math.abs(i-j);
                if( vol > temp )   temp = vol;
            }
        }
        return temp;
    }
}
//还可以用双指针法
