// Bitmasking_even-odd_lecture.cpp
#include<iostream>
using namespace std;
bool checkBit(int n){
	int lsb = n&1;
	//if lsb ==0 then even;
	//if lsb ==1 then odd;
	return lsb;
}
void setBit(int &n){
	int i;cin>>i;
	int mask=1<<i;
	n=n|mask;
}
int main(){
	freopen("myinput.txt","r",stdin);
	int n=5;

	//check the given no. is odd or even
	if(checkBit(n)){
		cout<<"odd"<<endl;
	}
	else{
		cout<<"even"<<endl;
	}	

	//SET or UNSET the bit 
	cout<<"before SET Bit "<<n<<endl;
	setBit(n);
	cout<<"after SET Bit "<<n<<endl;

	return 0;
}