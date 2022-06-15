// binary_search_PARATA(spoj).cpp
#include<iostream>
#include<algorithm>
using namespace std;
bool is_possible(int total_time,int no_of_cook,int no_of_parata,int rank[]){
	int parata=0;
	int time=0;
	int r=rank[0];int i=0;
	int cook=1,inc=1;
	while(cook<=no_of_cook and parata<=no_of_parata){
		time = time + r*inc;
		if(time<=total_time){
			inc++;parata++;
		}else{
			time=0;
			cook++;
			inc=1;i++;
			r=rank[i]; 
		}
	}
	if(parata >= no_of_parata){
		return true;
	}else{
		return false;
	}
}
int parata(int p,int no_of_cook,int rank[]){
	int sum=0;int r = rank[0];
	for(int i=0;i<p;i++){
		sum += r*(i+1); 
	}
	// cout<<sum<<endl;
	int s=0;int ans=(-1);
	int e=sum;
	while(s<=e){
		int mid=(s+e)/2;
		if(is_possible(mid,no_of_cook,p,rank)==true){
			ans=mid;
			e=mid-1;
		}else{
			s=mid+1; 
		}
	}
	return ans;
}

int main(){
	// freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t>0){
		int p;cin>>p;
		int no_of_cook;cin>>no_of_cook;
		int rank[100];
		for(int i=0;i<no_of_cook;i++)
			cin>>rank[i];
		sort(rank,rank+no_of_cook);
		cout<<parata(p,no_of_cook,rank)<<endl;
		t=t-1;	
	}

	return 0;
}