#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,k=0,x,y;
    int a[100005],c[100005];
    cin>>n;
    vector<pair<int,int> > v;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>c[i];
        v.push_back(make_pair(a[i],c[i]));
    }
    sort(v.begin(),v.end());
    for(int it=0;it<v.size();it++)
    {
        x=v[it].second;
        y=v[it+1].second;
        if(x<y)
            k=5;
    }
    if(k==5)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
    return 0;
}

