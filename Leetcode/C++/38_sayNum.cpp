class Solution {
public:
    string countAndSay(int n) {
        return count( n , "1" );
    }
    string count( int n , string str ){
        if( n == 1 )    return str;
        int len = str.length();
        string tempStr = "";
        for( int i = 0 ; i < len ; i++ ){
            int num = 1;
            while( i != len - 1 && str[i] == str[i+1] ){
                i++;
                num++;
            }
            tempStr += to_string(num) ;
            tempStr += str[i];
        }
        return count( n - 1 , tempStr );
    }
};
