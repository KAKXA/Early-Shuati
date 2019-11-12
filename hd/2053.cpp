#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		bool t = false;
		for(int i = 1 ; i <= n; i++){
			if(!(n % i)){
				t = !t;
			}
		}
		cout << t << endl;
	}
}
