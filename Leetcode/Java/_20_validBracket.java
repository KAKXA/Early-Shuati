class _20_validBracket {
    public static boolean isValid(String s) {
        StringBuffer temp = new StringBuffer();
        for( int i=0 ; i<s.length() ; i++)
        {   
            if( s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) == '{' ) temp.append( s.charAt(i) );
            else
            {   
                if( temp.length() == 0 )    return false;
                switch ( s.charAt(i) ) 
                {   
                    case ')' : if( temp.charAt(temp.length()-1) != '(' )    return false; break;
                    case ']' : if( temp.charAt(temp.length()-1) != '[' )    return false; break;
                    case '}' : if( temp.charAt(temp.length()-1) != '{' )    return false; break;
                }   
                temp.delete(temp.length()-1,temp.length());
            }   
        }   
        if( temp.length() != 0 )    return false;
        return true;
    }

    public static void main(String[] args)
    {
	    String s = "{";
	    System.out.println( isValid(s) );
    }
}
//取括号的配对情况应该用压栈出栈，这里应该用数组进行，我用String还是欠妥
//case该break就break,不要以为return了就可以不break，指不定return不成功就执行下一个语句去了
//java是强类型，不要对char做位运算
//java是强类型，不要把非零数当作true,0当成false
