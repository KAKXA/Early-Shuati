class _13_3SumClosest{
    public int threeSumClosest(int[] nums, int target) {
        int len = nums.length;
        if( len < 3 )   return 0;
        Arrays.sort(nums);
        int ans = nums[0] + nums[1] + nums[2];
        for( int i = 0 ; i < len - 2 ; i++){
            int t = nums[i];
            int left = i + 1,right = len - 1,temp;
            if( ( temp = nums[left] + nums[left + 1] + t ) > target ){
                if( temp - target < Math.abs(ans - target) )    ans = temp;
                break;
            }//极限剪枝，当剩余队列的前三个之和大于target，则剩余队列及其子序列的其它任意组合必然不可能比它更接近；
            else if( (temp = nums[right] + nums[right - 1] + t ) < target ){
                if( target - temp < Math.abs(ans - target) )    ans = temp;
            }//当剩余队列的第一个与后两个之和小于target,则剩余队列的其他任意组合必然不可能比它更接近；
            else{
                while( left < right ){
                    int sum = nums[left] + nums[right] + t;
                    if( Math.abs(ans - target) > Math.abs(sum - target) )   ans = sum;
                    else if( sum < target ) left++;
                    else if( target < sum ) right--;
                    else    return ans;
                }
            }
        }
        return ans;
    }
}
//写题前理清思路，不要盲目套用已知方法
