// Find all combinations of elements satisfying given constraints

#include<bits/stdc++.h>
using namespace std;

int cnt=0;

void find(int a[],int x,int n)
{
  if(x>n)
  {
    cnt++;
    for(int i=0;i<2*n;i++)
      cout<<a[i]<<" ";

    cout<<endl;

    return;
  }

  for(int i=0;i<2*n;i++)
  {
    if(a[i]==-1 && i+x+1<2*n && a[i+x+1]==-1)
    {
      a[i]=x;
      a[i+x+1]=x;

      find(a,x+1,n);

      a[i]=-1;
      a[i+x+1]=-1;
    }
  }
}

int main()
{
  int n;
  cin>>n;

  int ans[2*n];
  memset(ans,-1,sizeof(ans));

  find(ans,1,n);

  cout<<cnt<<endl;

return 0;
}
