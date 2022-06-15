// recursion_bucket-sort.cpp
/* input: 	5
			A 90
			B 50
			C 30
			D 90
			E 99
*/
#include<iostream>
#include<vector>
using namespace std;
class student
{
public:
	string name;
	int marks;
};

void Bucket_sort(student s[],int n){
	vector<student> v[101];
	for(int i=0;i<n;i++){
		v[s[i].marks].push_back(s[i]);
	}
	int rank=1;
	cout<<"Rank Name Marks"<<endl;
	for(int i=100;i>=0;i--){
		for(auto it : v[i]){
			cout<<rank<<"\t "<<it.name<<"\t  "<<it.marks<<endl;
			rank++;
		}
	}

}

int main(){
	freopen("input.txt","r",stdin);
	int n;cin>>n;
	student s[100];
	for(int i=0;i<n;i++){
		cin>>s[i].name >> s[i].marks;
	}
	Bucket_sort(s,n); 
	return 0;
}