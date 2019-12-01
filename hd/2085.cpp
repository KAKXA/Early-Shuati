#include<iostream>
using namespace std;
int main(){
	long long high[34];
	long long low[34];
	high[0] = 1;
	low[0] = 0;
	for(int i = 1; i < 34; ++i){
		high[i] = 3*high[i-1] + 2*low[i-1];
		low[i] = high[i-1] + low[i-1];
	}
	int n;
	while(cin >> n){
		if(n == -1){
			return 0;
		}
		cout << high[n] << ", " << low[n] << endl;
	}
	return 0;
}

