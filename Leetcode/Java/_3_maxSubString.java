class _3_maxSubString
{
    public int lengthOfLongestSubstring(String s) {
        int len = s.length();
        if( len == 0)   return 0;
        char[] temp = s.toCharArray();
        Arrays.sort(temp);
        int type = 1;
        for( int i = 0 ; i < len - 1;i++)
        {
            if( temp[i] != temp[i+1] )  type += 1;
        }
        int sum = 1;
        s += s.substring(len-1);
        for( int i = 0 ; i < len ; i++ )
        {
            for( int j = i + 1 ; j <= Math.min(i + 1 + type,len) ; j++ )
            {
                if( equal(s,i,j) )
                {
                    sum  = Math.max(sum,j-i);
                    break;
                }
            }
            if( sum == type )   return sum;
        }
        return sum;
    }
    public boolean equal( String s , int i , int j)
    {
        String apple = s.substring(j,j+1);
        for( int m = i ; m < j ;m++ )
        {
            if( s.substring(m,m+1).equals( apple ) )  return true;
        }
        return false;
    }
}
//我使用对string挨个equal，没有使用set.contains()或map.containsKey()快
//我对每个i都把j从i+1往上面找，实际上前面确定了无重复字符的区域不用再找了
//
//正解：滑动窗口法
class _3_maxSubString
{
    public int lengthOfLongestSubstring(String s) {
	int n = s.length(), ans = 0;
	Map<Character, Integer> map = new HashMap<>(); // current index of character
	// try to extend the range [i, j]
	for (int j = 0, i = 0; j < n; j++) {
	    if (map.containsKey(s.charAt(j))) {
		i = Math.max(map.get(s.charAt(j)), i);
	    }
	    ans = Math.max(ans, j - i + 1);
	    map.put(s.charAt(j), j + 1);
	}
	return ans;
    }
}
//正解:滑动窗口法的index索引版
public class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length(), ans = 0;
        int[] index = new int[128]; // current index of character
        // try to extend the range [i, j]
        for (int j = 0, i = 0; j < n; j++) {
            i = Math.max(index[s.charAt(j)], i);
            ans = Math.max(ans, j - i + 1);
            index[s.charAt(j)] = j + 1;
        }
        return ans;
    }
}
