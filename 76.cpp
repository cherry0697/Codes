// Find duplicates within a range `k` in an array

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

  k++;

  k=min(k,n);

  map<int,int> m1;

  int flag=0;

  for(int i=0;i<k;i++)
  {
    m1[a[i]]++;
    if(m1[a[i]]>1)
    {
      flag=1;
      break;
    }
  }

  if(flag)
    cout<<"YES"<<endl;
  else
  {
    for(int i=k;i<n;i++)
    {
      m1[a[i-k]]--;
      m1[a[i]]++;

      if(m1[a[i]]>1)
      {
        flag=1;
        break;
      }
    }

    if(flag)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }

return 0;
}
