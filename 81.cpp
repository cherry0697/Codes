// Left rotate an array

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

  for(int i=0;i<g;i++)
  {
    int j=i;
    int ele=a[i];

    while((j+k)%n!=i)
    {
      a[j]=a[(j+k)%n];
      j=(j+k)%n;
    }

    a[j]=ele;
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
