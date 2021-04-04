// { -6, 4, -5, 8, -10, 0, 8 }

// Maximum Product Subarray Problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int pro=a[0],running_pro=1;
  int mi=1;

  for(int i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      running_pro=1;
      mi=1;
    }
    else if(a[i]<0 && mi==1)
    {
      mi=a[i];
    }

    running_pro=running_pro*a[i];
    int temp=running_pro;
    if(temp<0)
      temp/=mi;

    pro=max(pro,temp);

    if(running_pro==0)
      running_pro=1;
  }

  cout<<pro<<endl;

return 0;
}
