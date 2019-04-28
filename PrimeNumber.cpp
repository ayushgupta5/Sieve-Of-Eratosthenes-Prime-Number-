#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cout<<"ENTER TEST CASES:"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"ENTER NUMBER:"<<endl;
        cin>>n;
        int a[n+1];
        for(i=0;i<=n;i++) a[i]=1;
        a[0]=0;a[1]=0;
        for(i=2;i<=sqrt(n);i++)
        {
            if(a[i]==1)
            {
                for(j=2;i*j<=n;j++)
                {
                    a[i*j]=0;
                }
            }
        }
        cout<<"PRIME NUMBERS ARE: ";
        for(i=0;i<=n;i++)
        {
            if(a[i]==1) cout<<i<<" ";
        }
        cout<<endl;
    }
}
