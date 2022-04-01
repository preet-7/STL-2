#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string,int> m;
	m["hello"]=20;
	m["world"]=12;
	cout<<m["hello"] <<" "<<m["world"]<<endl;
 	auto it=m.find("world");
	pair<string,int> p =*it;
        cout<< it->first<<" "<<it->second;
        cout <<endl;
	cout<<m.size()<<endl;

	map<int,int> f;
        f[10]++;
        f[10]++;
	f[10]++;
	cout<<f[10]<<endl;



	map<string,int> freq;
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		string s;
		cin >>s;
		if(freq[s]==0){
		cout<<"OK\n";
		}
		else{
			cout<< s << freq[s] <<"\n";
		}
		freq[s]++;
	}
}
