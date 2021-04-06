// Find maximum length sequence of continuous ones (Using Sliding Window)
// index to be replaced
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int ans=0;

  int latest=-1,prev=-1,ind=-1;

  for(int i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      prev=latest;
      latest=i;
    }

    if(i-prev>ans)
    {
      ans=i-prev;
      ind=i;
    }
  }

  cout<<ind<<" "<<ans<<endl;

return 0;
}
