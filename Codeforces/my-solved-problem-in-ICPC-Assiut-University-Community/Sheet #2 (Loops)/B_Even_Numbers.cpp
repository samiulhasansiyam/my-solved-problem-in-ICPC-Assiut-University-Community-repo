#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n ;
 cin >> n ;
 if(n>1)
 {
 for (int i=1;i<=n;i++)
 {
    if(i % 2 == 0 )
    {
        cout << i << "\n" ;
    }
 }
}
else
{
    cout << "-1" ;
}
return 0;
}