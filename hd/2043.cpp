#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	string s;
	char a[] = "0123456789";
	set<char> set1(a,a+9);
	char b[] = "abcdefghijklmnopqrstuvwxyz";
	set<char> set2(b,b+25);
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	set<char> set3(c,c+25);
	char d[] = "~!@#$%^";
	set<char> set4(d,d+6);
	cin >> n;
	while(n--){
		cin >> s;
		short sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0;
		if(s.length() < 8 || s.length() > 16){
			cout << "NO" << endl;
			continue;
		}
		for(char i: s){
			if(!sum1 && set1.count(i)){
				sum1 = 1;
			}
			if(!sum2 && set2.count(i)){
				sum2 = 1;
			}
			if(!sum3 && set3.count(i)){
				sum3 = 1;
			}
			if(!sum4 && set4.count(i)){
				sum4 = 1;
			}
		}
		if(sum1 + sum2 + sum3 + sum4 < 3){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}
