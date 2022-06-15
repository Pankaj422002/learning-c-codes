// algorithm_STL_string_sort.cpp
#include<iostream>
#include<algorithm>
using namespace std;
//1. basics approach
/*
bool mycompare(string a,string b){
	int i=0;
	while(i<a.length() && i<b.length()){
		if(a[i]<b[i]){
			return false;
		}
		else if(a[i]>b[i]){
			return true;
		}
		i++;
	}

	if(a.length()<b.length()){
		return true;
	}
	else return false;
}
void sortTo(string s[], int n){
	for(int i=0;i<(n-1);i++){
		for(int j=0;j<(n-1-i);j++){
			if(mycompare(s[j],s[j+1])==true){	//s[j]>s[j+1];
				string temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
}
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	string s[10000];
	for(int i=0;i<n;i++)
		cin>>s[i];

	sortTo(s,n);

	for(int i=0;i<n;i++)
		cout<<s[i]<<endl;

	return 0;
}
*/

//2. using inbuilt sort
bool compare(string a,string b){
	int i=0;
	while(i<a.length() && i<b.length()){
		if(a[i]<b[i]){
			return true;
		}
		if(a[i]>b[i]){
			return false; 
		}
		i++;
	}
	if(a.length()<b.length()){
		return false;
	}else{
		return true;
	}
}
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	string s[10000];
	for(int i=0;i<n;i++)
		cin>>s[i];
	sort(s,s+n,compare);
	for(int i=0;i<n;i++)
		cout<<s[i]<<endl;
	return 0;
}