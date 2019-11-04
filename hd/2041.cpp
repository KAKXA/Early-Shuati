#include<iostream>
using namespace std;
int main(){
	int st[41] = {0};
	st[1] = 1;
	st[2] = 1;
	for(int i = 3; i < 41; i++){
		st[i] = st[i-1] + st[i-2];
	}
	int n;
	int m;
	cin >> n;
	while(n--){
		cin >> m;
		cout << st[m] << endl;
	}
}
