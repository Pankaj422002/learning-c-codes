// sliding_window_min_WD_subarr.cpp
// find the minimum window subarray. 
#include <iostream>
#include <climits>
#include <unordered_map>
using namespace std;
int min_window_substring(string s,string p){
	int i=0,j=0;
	// int start=0;
	int ans=INT_MAX; 
	unordered_map<char,int> mp;
	for(int it=0;p[it]!='\0';it++){
		mp[p[it]]++;
	}
	int count = mp.size();
	while(j<s.length()){
		//calculation 
		if(mp.find(s[j])!=mp.end()){	//s[j] present
			mp[s[j]]--;
			if(mp[s[j]]==0){
				count--;
			}
		}
		//condition not hit;
		if(count>0)
			j++;
		else if(count==0){	//condition hit
			// ans<==calculation
			ans = min(ans,(j-i+1));
			// if(ans>(j-i+1)){
			// 	ans=(j-i+1);
			// 	start=i; 
			// }
			// cout<<count<<endl;
			while(count==0){
				//case1: s[i] is present in map 
				if(mp.find(s[i])!=mp.end()){
					if(mp[s[i]]==0){
						ans = min(ans,(j-i+1));
						// if(ans>(j-i+1)){
						// 	ans=(j-i+1);
						// 	start=i;
						// }
						mp[s[i]]++;i++;
						count++;j++;
					}else if(mp[s[i]]<0){
						mp[s[i]]++;
						i++; 
					}
				}else{		//case2: s[i] is not present in map
					i++;
				}
				
			}
		}
	}
	// string str="";
	// if(ans!=INT_MAX){
	// 	return str.append(s.substr(start,ans));
	// }else{
	// 	return str;
	// }

	return ans;
}
int main(){
	freopen("input.txt","r",stdin);
	string s;cin>>s;
	string p;cin>>p;
	// string s2 = min_window_substring(s,p);
	// cout<<s2<<endl;
	cout<<min_window_substring(s,p)<<endl;
	return 0;
}