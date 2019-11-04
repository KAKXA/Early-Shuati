#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a,b;
	while(n--){
		long sum1 = 0, sum2 = 0;
		cin >> a >> b;
		if(a == b){
			cout << "NO" << endl;
			continue;
		}
		for(int i = 1; i <= a/2; i++){
			if(a % i == 0){
				sum1 += i;
			}
		}
		for(int i = 1; i <= b/2; i++){
			if(b % i == 0){
				sum2 += i;
			}
		}
		cout << ((sum1 == b & sum2 == a) ? "YES" : "NO") << endl;
	}
}

