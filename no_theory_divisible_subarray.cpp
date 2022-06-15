// no_theory_divisible_subarray.cpp
/*
#include<iostream>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int a[10000];
	int n,k;cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];

	int csum[10000];
	csum[0]=0;csum[1]=a[0];
	for(int i=1;i<n;i++)
		csum[i+1]=csum[i]+a[i];

	int m[10000];
	for(int i=0;i<=n;i++){
		m[i]=(csum[i]%k + k)%k; 
	}

	int freq[k+1]={0};
	for(int i=0;i<k;i++){
		for(int j=0;j<=n;j++){
			if(i==m[j])
				freq[i]++;
		}
	}

	int ans=0;
	for(int i=0;i<k;i++){
		if(freq[i]>1){
			ans += ((freq[i])*(freq[i]-1))/2;
		}
	}

	cout<<ans<<endl;

	return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n,k;cin>>n>>k;
    int a[10000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int freq[k+1]={0};
    int sum=0;freq[0]++;
    for(int i=0;i<n;i++){
        sum+=a[i];
        freq[((sum%k)+k)%k]++; 
    }
    int ans=0;
    for(int i=0;i<k;i++){
        if(freq[i]>1)
            ans += ((freq[i])*(freq[i]-1))/2;
    }
    cout<<ans<<endl;
    return 0;
}