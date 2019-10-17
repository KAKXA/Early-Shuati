#include<iostream>
using namespace std;
int main(){
	int n,a,b,c,d,e,f;
	cin >> n;
	while(n--){
		cin >> a >> b >> c >> d >> e >> f;
		cout << a + d + ((b + e + (c + f) / 60) /60) << " " << 
			((b + e) + (c + f) / 60) % 60 << " " <<
			(c + f) % 60 << endl;
	}
}
