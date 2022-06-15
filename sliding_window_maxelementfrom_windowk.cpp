// sliding_window_maxelementfrom_windowk.cpp
// find the max element from subarray of size k
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> maxfrom_subarray(int n,int a[],int k){
	vector<int> v;
	list<int> l;
	int i=0,j=0;
	while(j<n){
		//calculation 
		if(l.size()==0)
			l.push_back(a[j]);
		else{
			while(l.size()!=0 and l.back()<a[j]){
				l.pop_back();
			}
			if(l.back()>a[j] or l.size()==0)
				l.push_back(a[j]);
		}

		//inc. j until window size is not hit
		if((j-i+1)<k)
			j++;
		else if((j-i+1)==k){

			//1. ans <==calculation
			v.push_back(l.front());
			
			//2. slide the window
			if(a[i] == l.front())
				l.pop_front();
			i++;j++; 

		}
	}

	return v;
}
int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int k;cin>>k;
	vector<int> v2;
	v2=maxfrom_subarray(n,a,k);
	for(auto it=v2.begin();it!=v2.end();++it){
		cout<<(*it)<<",";
	}
	cout<<endl;
	return 0;
}