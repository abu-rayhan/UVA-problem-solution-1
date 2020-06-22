#include<iostream>
using namespace std;
int main()
{
    int n,i,k,sum=0,sum2=0;
    int a[105],c[105];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum2+=a[0];
    k=1;
    c[0]=1;
    for(i=1;i<n;i++)
    {

        if(sum2>(sum/2))
        {
            break;
        }
        else if(a[0]/a[i]>=2)
        {
            sum2+=a[i];
            c[k]=i+1;
            k++;
        }
    }
    if(sum2<=(sum/2))
        cout<<0<<endl;
    else
    {
        cout<<k<<endl;
        for(i=0;i<k;i++)
            cout<<c[i]<<" ";
    }
    return 0;
}
