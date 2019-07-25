#include<iostream>
#include<string>
using namespace std;
#define min(a,b) (((a<b)?a:b))
int getMove(string s,int left,int right)
{
	int i;
	int len = s.length();
	int limit = min( left , len - right ); 
	for(i = 1;i < limit + 1; i++) 
	{
		if( s[left - i] != s[right + i] )break;	
	}
	return i;
}
string longestPalindrome(string s) {
	int left,right;
	int max = 1;
	int maxStart = 0;
	int len = s.length();
	for( left = 0,right = 1; right < len ; left++,right++)
	{
		if( s[left] == s[right] )
		{	      
			int tempMove = getMove(s,left,right); 
			if( max < 2*tempMove )
			{
		  		max = 2*tempMove;
			      	maxStart = left - tempMove + 1;
			}
		}
	}
	for( left = 0,right = 2; right < len ; left++,right++)
	{
		if( s[left] ==s[right] )
		{
			int tempMove = getMove(s,left,right);
			if( max < 2*tempMove + 1 )
			{
		  		max = 2*tempMove + 1;
			      	maxStart = left - tempMove + 1;
			}
		}
	}
	return s.substr(maxStart,max);
}

int main()
{
	cout << longestPalindrome("apa3437343pa") << endl;
	return 0;
}
