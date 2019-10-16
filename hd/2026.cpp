#include<iostream>
#include<sstream>
#include<ctype.h>
using namespace std;
int main(){
	string t;
	while(getline(cin,t)){
		stringstream ss;
		ss << t;
		int i = 0;
		while(ss >> t){
			if(i){
				cout << " ";
			}
			else{
				i = 1;
			}
			t[0] = toupper(t[0]);
			cout << t;
		}
		cout << endl;
	}
}