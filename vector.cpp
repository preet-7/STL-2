#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	cout<<" size "<< v.size()<<"\n";
	v.push_back(5);
	v.push_back(3);
	v.push_back(7);
	cout<<v[0]<<" "<<v[1]<<" "<<v[2];
        cout<<" size "<< v.size()<<"\n";
	v.pop_back();
	cout<<" size "<<v.size()<<"\n";
	v.push_back(1);
	cout<<v[0]<<" "<<v[1]<<" "<<v[2];
	cout <<" size "<<v.size()<<"\n";
	v.clear();
	cout <<" size "<<v.size()<<"\n";

	vector<int> v1(50);  // all 50  elements 0
        for(int i=0;i<50;i++){
                cout <<v1[i]<<" ";

        }
	cout<<endl;
  	vector<int> v2(50,7);	// all 50 elements initialized to 7
        for(int i=0;i<50;i++){
                cout <<v2[i]<<" ";

        }
	//vector<int> v3[50]; //array of 50 vectors!!





}
