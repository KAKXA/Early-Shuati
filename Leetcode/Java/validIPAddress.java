import java.util.regex.Pattern;
import java.util.regex.Matcher;
class validIPAddress{
    public String validIPAddress(String IP) {
        String str1 = "\\d{1,3}(\\.)\\d{1,3}(\\.)\\d{1,3}(\\.)\\d{1,3}";
        String str2 = "[123456789](\\d)*|0";
        String str3 = "([0123456789abcdefABCDEF]{1,4}:){7}[0123456789abcdefABCDEF]{1,4}";
        if( Pattern.compile(str1).matcher(IP).matches() )
        {
            boolean is4 = true;
            Matcher m = Pattern.compile(str2).matcher(IP);
            short i = 0;
            while( m.find() )
            {
                if( ++i>4 || Integer.parseInt(m.group()) > 255  )
                {
                    is4 = false;
                    break;
                }
            }
            if(is4) return "IPv4";
        }
        if( Pattern.compile(str3).matcher(IP).matches() ) return "IPv6";
        return "Neither";
    }
}
//当你要把字符串转换为Int时，一定要警惕用户传入一个大数。在字符串转换之前一定要注意过滤
//16进制数有0123456789abcdef(ABCDEF)16个数字
//Java的正则表达式用\\转义，\本体是\\\\
//使用标志参数(is4)时，注意此参数声明和判断的位置，既不能因为没进入代码块就不改变值而判断失误，也不能因为判断处在声明处代码块的外面而找不到变量
//if或while或for等的布尔表达式如果含有多个子表达式，结果发现始终没法进入代码块，应该是逻辑判断符号错了
//要依次得到正则表达式匹配的所有字符串，在while()中写m.find(),才能在代码快中写m.group()
//正则表达式.matches(字符串)前小后大
