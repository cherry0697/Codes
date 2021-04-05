// Rearrange array such that `A[A[i]]` is set to `i` for every element `A[i]`

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<n;i++)
  {
    int idx=a[i]%n;
    a[idx]+=(n*i);
  }

  for(int i=0;i<n;i++)
    cout<<a[i]/n<<" ";

  cout<<endl;

return 0;
}
