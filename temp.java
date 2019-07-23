{
            boolean repeat = true;
            Iterator i1 = item.iterator();
            while( i1.hasNext() )
            {
                Object temp = i1.next();
                if( curItem.contains( temp ) )    curItem.remove(temp);
                else
                {
                    repeat = false;
                    break;
                }
            }
