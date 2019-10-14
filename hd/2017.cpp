#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string temp;
		cin >> temp;
		int sum = 0;
		for(char c: temp){
			if(c <= '9' && c >= '0'){
				sum++;
			}
		}
		cout << sum << endl;
	}
}

