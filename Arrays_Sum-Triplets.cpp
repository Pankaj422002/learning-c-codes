// Arrays_Sum-Triplets.cpp
#include <iostream>
using namespace std;
void selection_sort(int a[],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j])
				min=j;
		}
		swap(a[min],a[i]); 
	}
}
void print(int a,int b,int c){
	int max1=0,max2=0,max3=0;

	if(a==b and a==c and b==c){
		cout<<a<<", "<<b<<" and "<<c<<endl;
		return;
	}
	if(a>b){
		// a b c
		// a c b
		// c a b
		if(a>c){
			max1 = a;
			if(b>c){
				max2 = b;
				max3 = c;
			} else{
				max2 = c;
				max3 = b;
			}
		}else{
			max1=c;
			max2=a;
			max3=b;
		}
	}
	// b a c
	// b c a
	// c b a
	else{
		if(c>a){
			if(b>c){
				max1=b;
				max2=c;
				max3=a;
			}
			else{
				max1=c;
				max2=b;
				max3=a;
			}
		}
		else{
			max1=b;
			max2=a;
			max3=c;
		}
	}
	cout<<max3<<", "<<max2<<" and "<<max1<<endl;
	return ;
}
void array_sumtriplets(int a[],int n, int sum){
		for(int i=0;i<n;i++){
			for(int j=i+1,k=(n-1);j<k;){
				if((a[i]+a[j]+a[k])==sum){
					print(a[i],a[j],a[k]);
					j++;
					k--;
				}
				else if((a[i]+a[j]+a[k])>sum){
					k--;
				}
				else if((a[i]+a[j]+a[k])<sum){
					j++;
				}
			}
		}
}
int main(){
	freopen("myinput.txt","r",stdin);
	int n;cin>>n;
	int a[10000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	selection_sort(a,n);
	int sum;cin>>sum;
	array_sumtriplets(a,n,sum);
	return 0;
}