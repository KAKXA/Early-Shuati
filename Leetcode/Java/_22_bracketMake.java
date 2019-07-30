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
//做任何算法题之前，判断该题的“核心控制元素”是什么

//下面是正儿八经的回溯法（递归）
//原理是一个合理的括号字符串满足(这就是核心控制元素)
//1，从左往右填充时左括号始终数始终小于等于总位数/2
//2，		   右括号数始终小于等于左括号数
//3，		   最终总长度为预期总长度，将其填入List
class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> ans = new ArrayList();
        backtrack(ans, "", 0, 0, n);
        return ans;
    }

    public void backtrack(List<String> ans, String cur, int open, int close, int max){
        if (cur.length() == max * 2) {
            ans.add(cur);
            return;
        }

        if (open < max)
            backtrack(ans, cur+"(", open+1, close, max);
        if (close < open)
            backtrack(ans, cur+")", open, close+1, max);
    }
}

//以下是与该题在Python区同思路的做法，Java实现没有使用动态规划所以略逊一筹，原理在22_bracketMake.py
class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> ans = new ArrayList();
        if (n == 0) {
            ans.add("");
        } else {
            for (int c = 0; c < n; ++c)
                for (String left: generateParenthesis(c))
                    for (String right: generateParenthesis(n-1-c))
                        ans.add("(" + left + ")" + right);
        }
        return ans;
    }
}
