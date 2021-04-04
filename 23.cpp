// Find all distinct combinations of a given length – I

#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100];

void find(vector <int> &v1,int idx,int k)
{
  if(k==0)
  {
    for(auto itr: v1)
      cout<<itr<<" ";

    cout<<endl;
    return;
  }

  for(int j=idx;j<n;j++)
  {
    v1.push_back(a[j]);
    find(v1,j+1,k-1);

    while(j<n && a[j]==a[j+1])
      j++;

    v1.pop_back();
  }
}

int main()
{
  cin>>n>>k;

  for(int i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n);

  vector <int> v1;
  find(v1,0,k);

return 0;
}
