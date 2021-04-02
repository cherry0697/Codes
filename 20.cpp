// Find the maximum difference between two array elements that
// satisfies the given constraints

//  O(N) and O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int mi=a[0],diff=0;

  for(int i=1;i<n;i++)
  {
    if(a[i]<mi)
      mi=a[i];

    diff=max(diff,a[i]-mi);
  }

  cout<<diff<<endl;

return 0;
}
