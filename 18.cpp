// Replace every array element with the product of
// every other element without using a division operator

// Recursion O(N) and O(1)

int n;
int a[1000];

#include<bits/stdc++.h>
using namespace std;

int find(int i,int left)
{
  int right=1;

  if(i<n-1)
  {
    right=find(i+1,left*a[i]);
  }

  int ret=right*a[i];
  a[i]=left*right;

  return ret;
}

int main()
{
  cin>>n;

  for(int i=0;i<n;i++)
    cin>>a[i];

  int right=find(0,1);
  a[0]=right;

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
