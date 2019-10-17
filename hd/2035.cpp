#include<iostream>
using namespace std;
int main(){
	int n, m;
	while(cin >> n >> m){
		int t = n;
		if(!(n||m)){
			break;
		}
		while(--m){
			t *= n;
			t %= 1000;
		}
		cout << t << endl;
	}
}
