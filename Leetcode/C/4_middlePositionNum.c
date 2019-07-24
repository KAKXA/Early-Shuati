double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int all = (nums1Size + nums2Size) / 2;
    int *p1,*p2,*cur,*pre;
    int i = 0;
    bool yue1 = false;
    bool yue2 = false;
    if( nums1Size ) p1 = nums1;
    else    yue1 = true;
    if( nums2Size ) p2 = nums2;
    else    yue2 = true;
    while( i <= all )
    {
        if( yue1 )
        {
            pre = cur;
            cur = p2;
            if( &nums2[nums2Size-1]-p2 )    p2++;
        }
        else if( yue2 )
        {
            pre = cur;
            cur = p1;
            if( &nums1[nums1Size-1]-p1 )    p1++;
        }
        else if( *p1 < *p2 )
        {
            pre = cur;
            cur = p1;
            if( &nums1[nums1Size-1]-p1 )    p1++;
            else    yue1 = true;
        }
        else
        {
            pre = cur;
            cur = p2;
            if( &nums2[nums2Size-1]-p2 )    p2++;
            else    yue2 = true;
        } 
        i++;
    }
    return (nums1Size + nums2Size) % 2 ? *cur : (double)(*cur)/2 + (double)(*pre)/2;
}
//最佳办法：对两个序列分别二分查找
//譬如，对于大小为5和6的两个数组[-5,-4,-3,-2,-1,4],[2,4,6,8,10,12]，先取第2个和第三个值，比较，留较小的那个
