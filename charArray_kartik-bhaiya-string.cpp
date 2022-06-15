// charArray_kartik-bhaiya-string.cpp
#include <iostream>
#include <string.h>
#define long long int
using namespace std;
int findlen(string str, int n,int k, char ch){
	int l=0, r=0,cnt=0;
	int max_len=1;
	while(r<n){
		if(str[r]!=ch){
			cnt++;
		}
		if(cnt>k){
			if(str[l]!=ch)
				--cnt;
			++l;
		}
		max_len=max(max_len, r-l+1);
		++r;
	}
	return max_len;
}
void kartik_bhaiya_str(string str, int n,int k){
	int max_len=1;
	max_len=max(max_len, findlen(str,n,k,'a'));
	max_len=max(max_len, findlen(str,n,k,'b'));
	cout<< max_len<<endl;
}
int32_t main(){
	int k;cin>>k;
	string str;
	cin>>str;
	int n=str.length();
	kartik_bhaiya_str(str,n,k);
	return 0;
}