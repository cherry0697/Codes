// Find majority element (Boyer–Moore Majority Vote Algorithm)

// O(N) and O(1)

// However this method gives wrong answer
// if there is no majority element


#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int co=1,ele=a[0];

  for(int i=1;i<n;i++)
  {
    if(a[i]!=ele)
      co--;
    else co++;

    if(co==0)
    {
      co=1;
      ele=a[i];
    }
  }

  cout<<ele<<endl;

return 0;
}
