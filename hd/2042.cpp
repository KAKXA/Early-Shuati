#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int m;
	while(n--){
		cin >> m;
		int temp = 3;
		for(int i = 0; i < m; i++){
			temp = (temp - 1)*2;
		}
		cout << temp << endl;
	}
}
