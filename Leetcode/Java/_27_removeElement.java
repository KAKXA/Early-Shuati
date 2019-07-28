class _27_removeElement {
    public int removeElement(int[] nums, int val) {
        int len = nums.length;
        int i;
        for(  i = 0 ; i < len ;)
        {
            if( nums[i] == val )    nums[i] = nums[len-- -1];
            else i++;
        }
        return len;
    }
}
//教训是当出现奇怪的错误时检查if后面是不是加了分号
