#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	cin >> n;
	char dic[] = "2223334445556667077888999";
	map<string,int> m;
	while(n--){
		string t;
		string ta = "";
		cin >> t;
		for(char i: t){
			if(i >= '0' && i <= '9'){
				ta = ta + i;
			}
			else if(i >= 'A' && i <= 'Z'){
				ta = ta + (dic[i-'A']);
			}
		}
		if(m.count(ta)){
			m[ta]++;
		}
		else{
			m.insert(pair<string,int>(ta,1));
		}
	}
	for(pair<string,int> i : m){
		if(i.second > 1){
			string t = i.first;
			cout << t.substr(0,3);
			cout << '-';
			cout << t.substr(3,4);
			cout << " " << i.second;
			cout << endl;
		}
	}
}
