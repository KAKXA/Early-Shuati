class Solution {
public:
    string convert(string s, int numRows) {
        string temp;
        int len = s.length();
        if(numRows == 1)   return s; 
        int mod = numRows*2 -2;
        for( int j = 0 ; j < numRows ; j++ )
        {
            if( j == 0 || j == numRows - 1 )
            {
                for(int i = j;i<len; i += mod )
                temp += s[i];
            }
            else
            {
                int add = mod - 2*j;
                for(int i = j;i<len; i+= mod )
                {
                    temp += s[i];
                    if(i+add<len)   temp += s[i + add];
                }
            }
        }
        return temp;
    }
};
