// Find maximum profit earned by buying and selling shares any number of times
// O(N) and O(1)
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
  int mi=a[0],ma=a[0];

  for(int i=0;i<n;i++)
  {
    if(a[i]<ma)
    {
      ans+=(ma-mi);
      mi=a[i];
      ma=a[i];
    }
    else
      ma=a[i];
  }

  ans+=(ma-mi);

  cout<<ans<<endl;

return 0;
}
