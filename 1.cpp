// Find a pair with the given sum in an array
// O(N) with hash space too O(N)
// Also can be done in O(NlogN) without hash

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  map<int,int> m1;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    m1[a[i]]++;
  }

  int s;
  cin>>s;

  for(int i=0;i<n;i++)
  {
    int temp=m1[s-a[i]];
    if(a[i]==s-a[i])
      temp--;

    if(temp>0)
    {
      cout<<"Pair Found"<<endl;
      break;
    }
  }

return 0;
}
