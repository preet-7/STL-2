#include <bits/stdc++.h>
using namespace std;

int main(){
	int A[5]={4,3,9,1,8};
	sort(A,A+4);
	for(int i=0;i<4;i++){
		cout <<A[i]<<" ";
	
	}
	cout<<endl;

	vector<int> v={2,1,0,7,4};
	sort(v.begin(),v.end());
        for(int i=0;i<4;i++){
                cout <<v[i]<<" ";
        }
	cout<<endl;

	vector<pair<int,string>> v1;
	pair<int,string> p1={3,"abv"};
        pair<int,string> p2={1,"ds"};
        pair<int,string> p3={2,"fe"};	
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	sort(v1.begin(),v1.end());

        for(int i=0;i<3;i++){
                cout <<v1[i].first<<" "<<v1[i].second<<endl;
        }



}
