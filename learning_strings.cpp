// learning_strings.cpp
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
	if(a.length()==b.length()){
		return a<b;
	}
	return a.length()>b.length();
}

int main(){

	freopen("myinput.txt","r",stdin);

	string s ="hello";
	cout<<"without using for loop: " << s<<endl;
	cout<<"using for loop: ";
	for(int i=0;i<s.length();i++){
		cout<<s[i];
	}
	cout<<endl;
	char ch[]="pankaj joshi";
	string s2(ch);
	cout<<"using char array coping : " <<s2<<endl;

	string x="saurabh";
	string y="joshi";
	x=x+" "+y;
	cout<<"using string concatination: " << x<<endl;

	string str="i am learning string";
	string word ="learning";
	cout<<"word found at: " <<str.find(word)<<endl;

	str.erase(str.find(word), word.length()+1);
	cout<<"i am erasing word : "<<str<<endl;

	string p;
	getline(cin,p);
	cout<<p<<endl;

	string s1="hello";
	string S2="world";
	if(s1<S2)		//lexico graphic comparison
		cout<<"s1 is smaller than s2"<<endl;
	else
		cout<<"s2 is smaller than s1"<<endl;

	//compare function 
	cout<<s1.compare(S2)<<endl;

	//sorting in string 
	int n;cin>>n;
	string str3[100];
	cin.get();
	for(int i=0;i<n;i++){
		getline(cin,str3[i]);
	}
	sort(str3,str3+n);
	for(int i=0;i<n;i++){
		cout<<str3[i]<<" ";
	}
	cout<<endl;


	//sort according to length
	int k;cin>>k;
	string str4[100];
	cin.get();
	for(int i=0;i<k;i++){
		getline(cin, str4[i]);
	}
	sort(str4,str4+k,compare);
	for(int i=0;i<k;i++){
		cout<<str4[i]<<endl;
	}
	
	return 0;
}