// Efficiently calculate the frequency of all elements present in a limited range array
// O(N) and O(1)

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
    int temp=a[i]%n;
    a[temp]+=n;
  }

  for(int i=0;i<n;i++)
    cout<<a[i]/n<<" ";

  cout<<endl;

return 0;
}
