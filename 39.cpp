// Maximum Product Subset Problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  int pro=1;

  int mi=INT_MAX;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]!=0)
      pro*=a[i];

    if(a[i]<0)
    {
      mi=min(mi,abs(a[i]));
    }
  }

  if(pro<0)
  {
    pro/=mi;
    pro*=(-1);
  }

  cout<<pro<<endl;

return 0;
}
