#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            int flag=0;
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0 && i!=1)
            cout<<i<<"\n";
        }
        cout<<"\n";
    }
}