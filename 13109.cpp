#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        long long int M,W,sum=0,counter=0,j;
        scanf("%lld %lld",&M,&W);
        long long int X[M+5];
        for(j=0;j<M;j++)
        {
            scanf("%lld",&X[j]);
        }
        sort(X,X+M);
        for(j=0;j<M;j++)
        {
            sum+=X[j];
            if(sum>W){break;}
            counter++;
        }
        printf("%lld\n",counter);
    }
    return 0;
}
