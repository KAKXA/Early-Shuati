class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.length();
        if(len == 0)    return 0;
        int longLen = haystack.length();
        char left = needle[0];
        char right = needle[len -1];
        for( int i = 0 ; i < longLen - len + 1; i++ ){
            if(haystack[i] == left && haystack[i+len-1] == right){
                if(haystack.substr(i,len) == needle)  return i;
                /*int p,q;
                for( int j = 1; ( p = i + j ) <= ( q = i + len -1 - j ) ; j++){
                    if( haystack[p] != needle[j] || haystack[q] != needle[q - i] ){
                        goto out;
                    }
                }
                return i;*/
            }
            //out:;
        }
        return -1;
    }
};
//用内置方法subStr()更快
