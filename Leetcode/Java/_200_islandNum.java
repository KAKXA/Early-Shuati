class _200_islandNum {
    public int numIslands(char[][] grid) {
        int sum = 0;
        int mr = grid.length;
        if( mr == 0 )  return 0;
        int ml = grid[0].length;
        for( int row=0 ; row<mr ; row++ )
        {
            for( int col = 0; col < ml ; col++ )
            {
                if( grid[row][col] == '1')
                {
                    check(grid,row,col);
                    sum ++;    
                }
            }
        }
        return sum;
    }
    public void check( char[][] copyGrid,int row,int col)
    {
        int mr = copyGrid.length;
        int ml = copyGrid[0].length;
        if( row<0 || col<0 || row>=mr || col>=ml || copyGrid[row][col] == '0'   ) return ;   
        copyGrid[row][col] = '0';
        check(copyGrid,row+1,col);
        check(copyGrid,row,col+1);
        check(copyGrid,row-1,col);
        check(copyGrid,row,col-1);
        return ;
    }
}
//经过长时间的迭代，这串代码的速度和内存消耗终于接近了题解
//不要在提交代码中使用try,catch形式的一场处理，很消耗时间
//能分别在不同的代码块内声明的变量就不要声明全局变量
//能通过函数传参得到的数组，就不要声明全局变量
//需要使用多次的，由方法得到的值，通过声明一个新变量存储它，这样省时间而且书写方便，不会多加内存
