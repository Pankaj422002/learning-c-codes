// Algorithm_STL_sort-game.cpp
#include<iostream>
#include<algorithm>
using namespace std;
void sort_game(pair<string,int>p[100],int n,int min_salary){
	
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(p[min].second<p[j].second){
				swap(p[min],p[j]);
			}
			if(p[min].second==p[j].second){
				if(p[min].first>p[j].first)
					swap(p[min],p[j]);
			}
		}
	}

}
int main(){
	freopen("myinput.txt","r",stdin);
	int min_salary;cin>>min_salary;
	int n;cin>>n;
	pair<string , int> p[100];
	for(int i=0;i<n;i++){
		cin>>p[i].first>>p[i].second;
	}

	sort_game(p,n,min_salary);

	for(int i=0;i<n;i++){
		if(p[i].second >= min_salary)
		cout<<p[i].first<<"  "<<p[i].second<<endl;
	}
	return 0;
}