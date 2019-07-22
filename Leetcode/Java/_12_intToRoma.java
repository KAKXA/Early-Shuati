class _12_intToRoma {
    public String intToRoman(int num) {
        StringBuilder ans = new StringBuilder();
        append(ans,num/1000,"M");
        num %= 1000;
        append(ans,num/900,"CM");
        num %= 900;
        append(ans,num/500,"D");
        num %= 500;
        append(ans,num/400,"CD");
        num %= 400;
        append(ans,num/100,"C");
        num %= 100;
        append(ans,num/90,"XC");
        num %= 90;
        append(ans,num/50,"L");
        num %= 50;
        append(ans,num/40,"XL");
        num %= 40;
        append(ans,num/10,"X");
        num %= 10;
        append(ans,num/9,"IX");
        num %= 9;
        append(ans,num/5,"V");
        num %= 5;
        append(ans,num/4,"IV");
        append(ans,num%4,"I");
        return ans.toString();
    }
    public void append(StringBuilder str,int num, String ch)
    {
        for( int i=0 ; i<num ; i++)
        {
            str.append(ch);
        }
    }
}
//对于要修改字符串的，不要用C
//对于要频繁重复的操作，用函数搞定
