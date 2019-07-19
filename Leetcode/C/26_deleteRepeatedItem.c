int removeDuplicates(int* nums, int numsSize){
    if(!numsSize)   return 0;   
    int i = 0;
    for(int j = 1 ; j < numsSize ; j++ )   if( *(nums+i)^*(nums+j) ) *( nums + ++i ) = *( nums + j );
    return i+1;
}
//不管题目有没有讲，都要防止题目传空指针进来
//要搞清楚在遍历过程中的所有情况，如这个j是为i+1还是i+n
//不要做无用功，比如我下意识地把j所在位置变成0,实际上是不需要的，要想清楚题目要求的输出是什么样的，只要不会影响到系统读取的，就不要去管
