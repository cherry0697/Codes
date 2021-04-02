// Find the index of 0 to be replaced to get the maximum length sequence of continuous ones

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int latest=-1;
  int prev=-1;

  int ans=-1,ind=-1;

  for(int i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      prev=latest;
      latest=i;
    }

    if(i-prev>ans)
    {
      ind=latest;
      ans=i-prev;
    }
  }

  cout<<ind<<endl;

return 0;
}
