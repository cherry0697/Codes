// Group elements of an array based on their first occurrence

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

  for(int i=0;i<n;i++)
  {
    while(m1[a[i]]!=0)
    {
      cout<<a[i]<<" ";
      m1[a[i]]-=1;
    }
  }

  cout<<endl;

return 0;
}
