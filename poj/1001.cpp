#include<iostream>
using namespace std;
int toInt(char c){
	return (int)(c - '0');
}
char toChar(int i){
	return (i + '0');
}
void put(string & s,int pos,int i){
	int temp;
	temp = toInt(s[pos]) + i;
	if(temp >= 10){
		put(s, pos - 1, temp / 10);
		s[pos] = toChar(temp % 10);
	}
	else{
		s[pos] = toChar(temp);
	}
}
void cul(string s,string & t){
	int dot1 = 0, dot2 = 0;
	for(string::iterator i = s.begin(); i != s.end(); i++){
		if(*i == '.'){
			s.erase(i);
			break;
		}
		dot1++;
	}
	for(string::iterator i = t.begin(); i != t.end(); i++){
		if(*i == '.'){
			t.erase(i);
			break;
		}
		dot2++;
	}
	int len1 = s.length();
	int len2 = t.length();
	int len = len1;
	string re(len1 + len2 + 1,'0');
	while(len2--){
		len1 = len;
		char len2c = t[len2];
		while(len1--){
			put(re,len1 + len2 + 2,toInt(len2c)*toInt(s[len1]));
		}
	}
	if(dot1 != len + 1){
		for(int i = 0; i < dot1 + dot2; i++){
			re[i] = re[i+1];
		}
		re[dot1 + dot2] = '.';
	}
	while(re[0] == '0'){
		re.erase(re.begin());
	}
	while(*re.rbegin() == '0'){
		re.erase(re.find_last_of('0'));
	}
	if(*re.rbegin() == '.'){
		re.erase(re.find_last_of('.'));
	}
	if(re.empty()){
		re = "0";
	}
	t = re;
}
int main(){
	string s;
	int n;
	while(cin >> s >> n){
		while(s[0] == '0' && s[1] != '.'){
			s.erase(s.begin());
		}
		while(*s.rbegin() == '0'){
			s.erase(s.find_last_of('0'));
		}
		if(*s.rbegin() == '.'){
			s.erase(s.find_last_of('.'));
		}
		if(s.empty()){
			cout << "0" << endl;
			continue;
		}
		string t = s;
		while(--n){
			cul(s,t);
		}
		cout << t << endl;
	}
	return 0;
}