// 4–Sum Problem | Quadruplets with a given sum
// Recursion

#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];

void find(int idx,int s,vector <int> &v1,int k)
{
  if(s<0)
    return;

  if(k==0)
  {
    if(s==0)
    {
      for(auto itr: v1)
        cout<<itr<<" ";

      cout<<endl;
    }

    return;
  }

  for(int i=idx;i<n;i++)
  {
    v1.push_back(a[i]);
    find(i+1,s-a[i],v1,k-1);
    v1.pop_back();
  }
}

int main()
{
  cin>>n;

  for(int i=0;i<n;i++)
    cin>>a[i];

  int sum;
  cin>>sum;

  vector <int> v1;

  find(0,sum,v1,4);

return 0;
}
