class Solution {
public:
    double myPow(double x, int n) {
        int temp = n<0 ? -(n+1) : n;
        double res = 1;
        double tempPow = x;
        while(temp)
        {
            if(temp&1)  res *= tempPow;
            temp >>= 1;
            tempPow *= tempPow;
        }
        return n<0 ? 1.0/(res * x) : res;
    }
};
//本质，将指数n分解成多个2的倍数如38 = 32 + 4 + 2
//然后由tempPow得到x^1,x^2,x^4,x^8,x^16,x^32，temp&1用于判断38的当前二进制位是否是1，如果是，就把答案res乘上2^n(n为当前位)，如果不是，则通过自增算出下一个x^(2n),如当前tempPow为3^8,则求出3^16。
