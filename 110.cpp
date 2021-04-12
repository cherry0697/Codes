// Find the largest number possible from a given set of numbers

#include<bits/stdc++.h>
using namespace std;

bool mine(int const& p1,int const &p2)
{
  string s1=to_string(p1);
  string s2=to_string(p2);

  string val1=s1+s2;
  string val2=s2+s1;

  return val1>val2;
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n,mine);

  for(int i=0;i<n;i++)
    cout<<a[i];

  cout<<endl;

return 0;
}
