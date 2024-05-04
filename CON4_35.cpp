#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, ans = 0, s = 0;
        int ok=0;
        int ma=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if(x>0){
              ok=1;
            }
            ma=max(ma,x);
            s += x;
            ans = max(ans, s);
            if (s < 0)
                s = 0;
        }
        if(ok==0){
          cout<<ma<<"\n";
        }
        else{
        cout << ans << endl;
        }
    }
}