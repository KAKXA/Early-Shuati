#include<iostream>
using namespace std;
int main(){
	string a, b;
	while(cin >> a >> b){
		if(a[0] == '-' && b[0] == '-' || a[0] == '+' && b[0] == '+'){
			a = a.substr(1,a.size() - 1);
			b = b.substr(1,b.size() - 1);
		}
		while(a[0] == '0'){
			a = a.substr(1,a.size() - 1);
		}
		while(b[0] == '0'){
			b = b.substr(1,b.size() - 1);
		}
		for(char i: a){
			if(i == '.'){
				while(*a.rbegin() == '0'){
					a = a.substr(0,a.size() - 1);
				}
			}
		}
		for(char i: b){
			if(i == '.'){
				while(*b.rbegin() == '0'){
					b = b.substr(0,b.size() - 1);
				}
			}
		}

		if(a == b){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
