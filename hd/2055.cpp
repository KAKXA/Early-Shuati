#include<iostream>
using namespace std;
int main(){
	int n,m;
	char c;
	cin >> n;
	while(n--){
		cin >> c >> m;
		if(c <= 'Z'){
			cout << c - 'A' + 1 + m << endl;
		}
		else{
			cout << 'a' - c - 1 + m << endl;
		}
	}
}
