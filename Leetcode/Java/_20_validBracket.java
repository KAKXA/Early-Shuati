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
