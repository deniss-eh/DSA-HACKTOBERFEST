#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
	cout<<"Current size of vector is -> "<<v.size()<<endl;
	for (int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){

	vector<int> vec = {2, 3, 5, 6, 7};
	vector<int> :: iterator it = vec.begin();
	
	cout<<*it<<endl;
	
	printVec(vec);
	
	vec.pop_back();
	printVec(vec);
	return 0;
}

