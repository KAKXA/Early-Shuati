#include<iostream>
using namespace std;
int main(){
	string a, b;
	while(cin >> a >> b){
		for(char i: a){
			if(i == '.'){
				while(*a.rbegin() == '0'){
					a = a.substr(0,a.size() - 1);
				}
			}
		}
		if(*a.rbegin() == '.'){
			a = a.substr(0,a.size() - 1);
		}
		for(char i: b){
			if(i == '.'){
				while(*b.rbegin() == '0'){
					b = b.substr(0,b.size() - 1);
				}
			}
		}
		if(*b.rbegin() == '.'){
			b = b.substr(0,b.size() - 1);
		}
		if(a == b){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
