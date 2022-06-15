// Ramu_help.cpp
#include <iostream>
using namespace std;
int main()
{
//   freopen("input.txt","r",stdin);
  int c1,c2,c3,c4,T;
  cin>>T;
  
 for(int k=0;k<T;k++)
  {
      cin >> c1 >> c2 >> c3 >> c4;
    int rickshaw,cab;
    cin>>rickshaw>>cab;

    // calculation of rickshaw
    int sum1=0;
    for(int i=0;i<rickshaw;i++)
    {
      int r;
      cin>>r;
      // min(r*c1,c2)
      if((r*c1)<c2)
      sum1+=(r*c1);
      else 
      sum1+=c2;
    }
    int minrick=0;
    if(sum1<c3)
      minrick=sum1;
    else 
      minrick=c3;


    // calculation of cabs

      int sum2=0;
      for(int i=0;i<cab;i++)
      {
      int r;
      cin>>r;
      // min(r*c1,c2)
      if((r*c1)<c2)
        sum2+=(r*c1);
      else 
        sum2+=c2;
      }
      int mincab=0;
      if(sum2<c3)
      mincab=sum2;
      else 
      mincab=c3;

      // addition to cost of rickshaw and cabs 
      int cost = minrick + mincab;

      // final cost 
      int finalcost=0;
      if(cost < c4)
      finalcost=cost ;
      else 
      finalcost=c4;

      // print final cost 
      cout << finalcost << "\n";
  }

  return 0;
}