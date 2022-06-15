// charArray_find-cb-number.cpp
#include <iostream>
#include <string.h>
using namespace std;
bool iscb(long long int a){
	if(a==0 || a==1)
		return false;

	int b[10]={2,3,5,7,11,13,17,19,23,29};
	for(int i=0;i<10;i++){
		if(b[i]==a){
			return true;
		}
	}

	for(int i=0;i<10;i++){
		if(a%b[i]==0){
			return false;
		}
	}
	return true;
}
bool isvalid(bool visited[],int start, int end){
	for(int i=start;i<end;i++){
		if(visited[i]==true)
			return false;
	}
	return true;
}
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	string str;int cnt=0;
	cin>>str;
	bool visited[n]={false};
	for(int len=1;len<=n;len++){
		for(int start=0;start<=(n-len);start++){
			string sub= str.substr(start,len);
			int end=start+len;
			if(iscb(stoll(sub)) && isvalid(visited,start,end)){
				cnt++;
				for(int i=start;i<end;i++){
					visited[i]=true;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}