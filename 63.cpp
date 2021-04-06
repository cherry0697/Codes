// Find minimum product among all combinations of triplets in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n);

  int ans=max(a[0]*a[1]*a[2],a[0]*a[n-1]*a[n-2]);

  cout<<ans<<endl;

return 0;
}

// Linear Solution also exist but it is boring
