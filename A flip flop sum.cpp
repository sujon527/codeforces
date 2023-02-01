#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int sum[mx];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int ans=0,cnt=0,cnt2=0;

        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>sum[i];
            if(sum[i]==-1)
            {
                cnt2++;
            }
            ans+=sum[i];

        }
        for(int i=0;i<n-1;i++)
        {
           if(sum[i]==-1&&sum[i+1]==-1)
            {
                cnt++;
            }

        }
        if(cnt>=1)
        {
            cout<<(ans+4)<<endl;
        }
        else if(cnt2>=1)
        {
           cout<<ans<<endl;
        }
        else
        {
            cout<<(ans-4)<<endl;
        }


    }


}
