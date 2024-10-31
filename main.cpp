#include <iostream>
#include<cmath>

using namespace std;

int main()
{

  unsigned long l1,r1,l2,r2 ; cin>>l1>>r1>>l2>>r2;
  if(r1>l2 && r1<r2)
  {
      cout<<l2<<" "<<r1;

  }
  else
    cout<<"-1";


}
/*
int main()
{
    int x; cin>>x;
    if (x!= 2 && x%2==0)
        cout<<"YES";
    else
        cout<<"NO";

}
*/
