// sliding_window_longestsubstring_k-unique.cpp
//find the longest substring with k unique character.
#include<iostream>
#include<unordered_map>
using namespace std;
int longest_substring(string s,int k){
	int i=0,j=0;
	int ans=0; 
	unordered_map<char,int> mp;
	while(j<s.length()){
		//calculation 
		mp[s[j]]++;

		if(mp.size()<k){
			j++;
		}else if(mp.size()==k){
			//ans <== calculation
			ans = max(ans,(j-i+1));
			j++;
		}else if(mp.size()>k){
			while(mp.size()>k){
				//remove the calculation of i
				mp[s[i]]--;
				if(mp[s[i]]==0){
					mp.erase(s[i]);
				}
				i++; 
			}
			j++;
		}

	}
	return ans;
}

int main(){
	freopen("input.txt","r",stdin);
	string s;
	cin>>s;
	int k;cin>>k;
	cout<<longest_substring(s,k)<<endl;
	return 0;
}