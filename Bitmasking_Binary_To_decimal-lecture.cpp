// Bitmasking_Binary_To_decimal-lecture.cpp
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	freopen("myinput.txt","r",stdin);
/*	1.general

	int n;cin>>n;
	int p=1;int ans=0;
	while(n>0){
		ans+=(n%2)*p;
		p=p*10;
		n=n/2;
	}

	cout<<ans<<endl;
*/

/*	2.Bitwise

	int n2;cin>>n2;
	int p2=1;int ans2=0;
	while(n2>0){
		ans2+=(n2&1)*p2;
		p2=p2*10;
		n2=n2>>1;
	}
	cout<<ans2<<endl;
*/

/*	3.using string

	int n3;cin>>n3;
	string s;
	while(n3>0){
		if(n3%2==0){
			s.push_back('0');
		}else{
			s.push_back('1');
		}
		n3=n3/2;
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;
*/

//	4.OPTIMISED Decimal_To_Binary

	int n4;cin>>n4;
	bool isOnefound=false;
	int mask=1<<30;
	while(mask!=0){

		if((mask&n4)==0 && isOnefound==false){
			mask=mask>>1;
			continue;
		}
		else{
			isOnefound=true;
			if((mask&n4)>0){
				cout<<1;
			}else{
				cout<<0;
			}
			mask=mask>>1;
		}
	}
	cout<<endl;

return 0;
}