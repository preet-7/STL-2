#include <bits/stdc++.h>
using namespace std;

int main(){
	set<int> s;
	s.insert(4);
	s.insert(2);
	s.insert(4);
	cout<<" size "<<s.size()<<endl;

	cout<<s.count(4)<<" "<<s.count(2)<<" "<<s.count(1)<<endl;

	s.erase(4);
	s.insert(6);
	cout<< s.count(4);
        cout <<endl;
	auto it=s.begin();
	while(it!=s.end()){
	cout<< *it<<" ";
	it++;
	}
	cout<<endl;
	s.erase(s.begin());
	cout << *s.begin()<<endl;


	set<int> s1;
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
	 int x;
	 cin >>x;
	 s1.insert(x);
	}

	for(int x:s1){
	  cout<< x<<" ";
	}




}
