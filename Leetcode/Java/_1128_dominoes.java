class _1128_dominoes{
    public int numEquivDominoPairs(int[][] dominoes) {
        int temp[][]  = new int[10][10];
        int sum = 0;
        for( int[] i : dominoes )
        {
                sum += temp[i[0]][i[1]];
                temp[i[0]][i[1]]++ ;
                if(i[0] != i[1])    temp[i[1]][i[0]]++ ;
        }
        return  sum; 
    }
}
