// Find the minimum difference between the index of two given elements present in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int x,y;
  cin>>x>>y;

  int ans=INT_MAX;

  int x_ind=-1,y_ind=-1;

  for(int i=0;i<n;i++)
  {
    if(a[i]==x)
    {
      x_ind=i;
      if(y_ind!=-1)
      {
        ans=min(ans,abs(y_ind-x_ind));
      }
    }

    if(a[i]==y)
    {
      y_ind=i;
      if(x_ind!=-1)
        ans=min(ans,abs(x_ind-y_ind));
    }
  }

  cout<<ans<<endl;

return 0;
}
