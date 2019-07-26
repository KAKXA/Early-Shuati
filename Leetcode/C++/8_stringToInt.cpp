class Solution {
public:
    int myAtoi(string str) {
        int len = str.length();
        bool zheng = true;
        int left;
        for( left = 0 ; left < len ; left++ )
        {
            if(str[left] <= '9' && str[left] >= '0')    break;
            else if(str[left] == '-' )
            {
                zheng = false;
                left++;
                break;
            }
            else if(str[left] == '+')
            {
                left++;
                break;
            }
            else if(str[left] != ' ' && str[left] != '\t' ) return 0;
        }
        int right = left;
        long sum = 0;
        for( ;right < len;right++)
        {
            int tmp = str[right] - '0';
            if(tmp > 9 || tmp < 0)  return zheng?(int)sum:-(int)sum;
            sum *= 10;
            sum += tmp; 
            if(sum > 2147483647)    return zheng?INT_MAX:INT_MIN;
        }
        return zheng?(int)sum:-(int)sum;
    }
};
