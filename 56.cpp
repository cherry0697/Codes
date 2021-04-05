// Find a triplet having the maximum product in an array

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

  int ans=max(a[n-1]*a[n-2]*a[n-3],a[n-1]*a[0]*a[1]);

  cout<<ans<<endl;

return 0;
}

// It can be done in O(N) time too but boring implementation
