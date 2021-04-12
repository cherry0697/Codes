// Right rotate an array `k` times

// JUGGLING ALGO

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int k;
  cin>>k;

  int g=__gcd(k,n);

  int i=n-1;

  for(int _=0;_<g;_++)
  {
    int j=i;
    int ele=a[i];

    while(1)
    {
      int ind=(j-k);
      if(ind<0)
        ind+=n;

      if(ind==i)
        break;

      a[j]=a[ind];
      j=ind;
    }

    a[j]=ele;
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
