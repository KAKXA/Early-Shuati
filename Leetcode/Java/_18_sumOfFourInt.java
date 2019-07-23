import java.util.ArrayList;
class _18_sumOfFourInt{
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        int len = nums.length;
        for( int a = 0 ; a<len-3 ; a++)
        {
            for( int b = a+1 ; b<len-2 ; b++)
            {
                for( int c = b+1 ; c<len-1 ; c++)
                {
                    for( int d= c+1 ; d<len ; d++)
                    {
                        if( nums[a]+nums[b]+nums[c]+nums[d] == target && in( ans,Arrays.asList( nums[a],nums[b],nums[c],nums[d] ) ) )  ans.add( Arrays.asList( nums[a],nums[b],nums[c],nums[d] ) );  
                    }
                }
            }
        }
        return ans;
    }
    public boolean in( List<List<Integer>> ans , List<Integer> item )
    {
        Collections.sort(item);
        for( List<Integer> curItem : ans )
        {
            Collections.sort(curItem);
            if ( item.equals(curItem) )  return false;
        }
        return true;
    }
}
//这个暴力法很不好，如果不是在第二重循环套了一个sum根本过不了
//正解是：先对目标数组排序，再遍历数字取所有两个数的数对。再用双指针从两端与target比较，直到找到多个正解。
//去重方法，对得到的四个数排序(Collections.sort()),再遍历ans的二维List遍历，依次equals每个List如果有相同的返回false
//剪枝策略:在做查找算法时，尽量省去不必要的遍历，这种遍历往往可以通过排序达到
