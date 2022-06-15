// sliding_window_count_anagram.cpp
#include<iostream>
#include<unordered_map>
using namespace std;
int countanagram(string s, string p){
	unordered_map<char,int>m;  
	for(int i=0;p[i]!='\0';i++){
		m[p[i]]++;
	}
	int cnt = m.size();

	int i=0,j=0;
	int k = p.length();
	int n=s.length();
	int ans =0; 
	while(j<n){
		//calculation to avoid repetition
		m[s[j]]--;
		if(m[s[j]]==0)
			cnt--;

		//if window size not hit then just inc j;
		if((j-i+1)<k)
			j++;
		else if((j-i+1)==k){

			//1. ans <=== calculation
			if(cnt==0){
				ans +=1;
			}

			//2. slide the window
			if(m[s[i]]==0)
				cnt++; 
			m[s[i]]+=1;

			i++;j++; 

		}
	}
	return ans;
}
int main(){
	freopen("input.txt","r",stdin);
	string str;	cin>>str;
	string ptr;	cin>>ptr;

	// countanagram(str,ptr);
	cout<<countanagram(str,ptr)<<endl;

	return 0;
}