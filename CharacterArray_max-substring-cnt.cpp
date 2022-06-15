// CharacterArray_max-substring-cnt.cpp
#include<iostream>
using namespace std;
int max(int a,int b){
	return (a>b)?a:b ;
}
void max_substringcount(char a[],int k){
	int len=(-1);
	int cnt=0;
	int i=0;
	int freq[26]={0};
	for(int j=0;a[j]!='\0';j++){
		// update the freq array
		freq[a[j]-'a']++;

		// if char come first time then : count it
		if(freq[a[j]-'a']==1){
			cnt++;
		}

		//move i pointer if count is greater than k
		while(cnt>k){
			freq[a[i]-'a']--;
			if(freq[a[i]-'a']==0){
				cnt--;
			}
			i++; 
		}

		// if count is equal to k then update len each time 
		if(cnt==k){
			len=max(len,(j-i+1));
		}
	}
	cout<<"length is : "<<len<<endl;
}
int main(){
	freopen("myinput.txt","r",stdin);
	char a[1000];
	int k;
	cin>>a>>k;
	max_substringcount(a,k);
	return 0;
}