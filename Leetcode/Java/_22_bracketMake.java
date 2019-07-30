class _22_bracketMake{
    public List<String> generateParenthesis(int n) {
        List<String> all = new ArrayList<String>();
        List<String> temp = new ArrayList<String>();
        if(n == 0)
        {
            temp.add("");
            return temp;
        }
        int sum;
        temp.add("()");
        for( int i = 2 ; i <= n ; i++ )
        {
            all.addAll(temp);
            sum = 0;
            temp.clear();
            String str = "";
            Iterator i1 = all.iterator();
            while(i1.hasNext())
            {
                String temp1 = i1.next().toString();
                temp.add(temp1);
                sum++;
                Iterator i2 = all.iterator();
                while(i2.hasNext())
                {
                    String temp2 = i2.next().toString();
                    String temp3 = temp1 + temp2;
                    if( temp3.length() <= i*2 )
                    {
                        temp.add(temp3);
                        sum++;
                    }
                }
            }
            for( int j = sum - 1 ; j >= 0 ; j-- )
            {
                String tempStr = temp.get(j);
                temp.remove(j);
                while( tempStr.length() != i*2 )    tempStr = "(" + tempStr + ")";
                if( !( temp.contains(tempStr) ) )   temp.add(tempStr);
            }
        }
        return temp;
    }
}
