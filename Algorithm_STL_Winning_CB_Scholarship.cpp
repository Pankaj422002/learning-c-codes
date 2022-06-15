// Algorithm_STL_Winning_CB_Scholarship.cpp
#include<iostream>
#define int long long int
using namespace std;
bool ispossible(int mid,int n,int m,int x,int y){
	int noofBadstudent = n-mid;
	m=m+(noofBadstudent*y);
	return (m/x)>=mid;
}
int32_t main(){
	freopen("myinput.txt","r",stdin);
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int ans=0;
	int s=0, e=n;
	while(s<=e){
		int mid=(s+e)/2;
		if(ispossible(mid,n,m,x,y)==true){
			ans=mid;
			s=mid+1;
		}else{
			e=mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}