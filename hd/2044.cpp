#include<iostream>
using namespace std;
int main(){
	int n;
	int a, b;
	cin >> n;
	long long i[50];
	i[1] = 1;
	i[2] = 2;
	for(int j = 3; j < 50; j++){
		i[j] = i[j-1] + i[j-2];
	}
	while(n--){
		cin >> a >> b;
		cout << i[b-a] << endl;
	}
}
