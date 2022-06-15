// recursion_subsequence.cpp
#include <iostream>
using namespace std;
void subsequence(string str,int i,string output){
	//base case : 
	if(str[i]=='\0'){
		cout<<output<<endl;
		return;
	}

	//recursive case : 

	//considering str[i]: 
	output.push_back(str[i]);
	subsequence(str,i+1,output);
	output.pop_back();

	//not considering str[i]: 
	subsequence(str,i+1,output);

}
int main(){
	freopen("input.txt","r",stdin);
	string s;cin>>s;
	subsequence(s,0,"");
	return 0;
}