#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,x,n,i;
    while(scanf("%lld",&n)){
        if(n==0)break;
        priority_queue<long long,vector<long long>,greater<long long> >pq;
        for(i=0;i<n;i++){
            scanf("%lld",&a);
            pq.push(a);
        }
        long long int r=0,s=0;
        while(pq.size()>1){
            s=pq.top();
            pq.pop();
            s+=pq.top();
            pq.pop();
            pq.push(s);
            r+=s;
        }
        printf("%lld\n",r);
    }
    return 0;
}
