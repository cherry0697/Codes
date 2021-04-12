// Find the sorted triplet in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int min_ele=a[0];

  int l=-1,m=-1;

  for(int i=1;i<n;i++)
  {
    if(a[i]<=min_ele)
    {
      min_ele=a[i];
    }
    else if(m==-1)
    {
      l=min_ele;
      m=a[i];
    }
    else if(a[i]<=m)
    {
      l=min_ele;
      m=a[i];
    }
    else{
      cout<<l<<" "<<m<<" "<<a[i]<<endl;
      break;
    }
  }

return 0;
}
