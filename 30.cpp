// Find maximum sum path involving elements of given arrays

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;

  int a[n],b[m];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<m;i++)
    cin>>b[i];

  int i=0,j=0;
  int sum1=0,sum2=0,sum=0;

  while(i<n && j<m)
  {
    if(a[i]<b[j])
    {
      sum1+=a[i];
      i++;
    }
    else if(a[i]>b[j])
    {
      sum2+=b[j];
      j++;
    }
    else
    {
      sum+=a[i];
      i++;
      j++;
      sum+=max(sum1,sum2);
      sum1=0;
      sum2=0;
    }
  }

  while(i<n)
  {
    sum1+=a[i];
    i++;
  }

  while(j<m)
  {
    sum2+=b[j];
    j++;
  }

  sum+=max(sum1,sum2);

  cout<<sum<<endl;

return 0;
}
