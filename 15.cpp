// Find the largest subarray formed by consecutive integers
// O(N^2) and O(N)

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

  for(int i=0;i<n;i++)
  {
    set <int> s1;
    for(int j=i;j<n;j++)
    {
      s1.insert(a[j]);
      if(s1.size()==j-i+1)
      {
        int mi=*s1.begin();
        int ma=*s1.end();

        if(ma-mi==j-i+1)
          ans=max(ans,j-i+1);
      }
      else
        break;
    }
  }

  cout<<ans<<endl;

return 0;
}
