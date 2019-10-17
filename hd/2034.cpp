#include<iostream>
#include<set>
using namespace std;
int main(){
	while(true){
		set<int> t;
		int n,m,ti;
		cin >> n >> m;
		if(!(n||m)){
			return 0;
		}
		while(n--){
			cin >> ti;
			t.insert(ti);
		}
		while(m--){
			cin >> ti;
			if(t.count(ti)){
				t.erase(ti);
			}
		}
		if(t.empty()){
			cout << "NULL";
		}
		else{
			for(auto i = t.begin(); i != t.end(); i++){
				cout << *i << " ";
			}
		}
		cout << endl;
	}
}

