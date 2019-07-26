#include<iostream>
#include<string>
using namespace std;
#define min(a,b) (((a<b)?a:b))
int getMove(string& s,int left,int right)	//这里取引用速度会变快很多
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

//以下是更好的算法，专门解决最长回文子串问题，Manacher算法
int Manacher(string s)
{
	int len = strlen(s);
	string tempS;
	tempS.append('$');
	for( int i = 0 ; i < s.length() ; i++ )
	{
	}
}

//以下是时间复杂度更高但具有普适性的动态规划法

int main()
{
	cout << longestPalindrome("apa3437343pa") << endl;
	return 0;
}
