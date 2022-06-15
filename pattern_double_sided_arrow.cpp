// pattern_double_sided_arrow.cpp
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ieq,jeq;
  for(int i=0;i<n;i++){
    for(int j=0;j<=(2*n-2);j++){
      // compute ieq ,jeq
      if(i<n/2)
        ieq=i;
      else 
        ieq=n-1-i;

      if(j<n)
        jeq=j;
      else
        jeq=(2*(n-1)-j);
      // cout<<"("<<ieq<<","<<jeq<<")";
      // when to print
      if((jeq>=((n-1)-(2*ieq)))&&(jeq<=n-1-ieq)){
        //print nos
        cout<<(n-ieq-jeq)<<" ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
  return 0;
}