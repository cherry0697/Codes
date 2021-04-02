// Find the maximum product of two integers in an array
// O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int ma1=max(a[0],a[1]);
  int ma2=min(a[0],a[1]);
  int mi1=ma2;
  int mi2=ma1;

  for(int i=2;i<n;i++)
  {
    if(a[i]>ma1)
    {
      ma2=ma1;
      ma1=a[i];
    }
    else
      ma2=max(ma2,a[i]);

    if(a[i]<mi1)
    {
      mi2=mi1;
      mi1=a[i];
    }
    else
      mi2=min(mi2,a[i]);
  }

  cout<<max(ma1*ma2,mi1*mi2)<<endl;

return 0;
}
