// recursion_1st-last-all-occurences.cpp
#include<iostream>
#include <vector>
using namespace std;
vector<int> v;

int first_occurence(int a[],int n,int key,int idx){
	//base case: 
	if(idx>=n)
		return -1;

	//our work: 
	if(a[idx]==key)
		return idx; 

	//recursive call: 
	int index = first_occurence(a,n,key,idx+1);
	return index;
}
int last_occurence_2(int a[],int n,int key){

    //base case : 
    if(n<=0){
        return -1;
    }

    //recursive case: 
    int last = last_occurence(a+1,n-1,key);

    if(last==(-1)){
        //key not found
        if(a[0]==key)
            return 0;
        else
            return -1;
    }
    else{
         return last+1;
    } 
     
}
int last_occurence(int a[],int n,int key,int idx){
	//base case : 
	if(idx>=n)
		return -1;

	//recursive case : 
	int last = last_occurence(a,n,key,idx+1);

	if(last!=-1){
		return last;
	}
	if(a[idx]==key){
		return idx;
	}
	return -1;
}

void all_occurence(int a[],int n,int key,int idx){
	//base case : 
	if(idx>=n)
		return;

	//our work: 
	if(a[idx]==key){
		v.push_back(idx); 
	}
	
	//recursive case: 
	all_occurence(a,n,key,idx+1);


}

int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int key;cin>>key;
	cout<<first_occurence(a,n,key,0)<<endl;
	cout<<last_occurence(a,n,key,0)<<endl;
	all_occurence(a,n,key,0);
	for(auto it : v){
		cout<<it<<",";
	}
	cout<<endl;
	return 0;
}
