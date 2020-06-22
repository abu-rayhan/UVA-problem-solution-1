#include<bits/stdc++.h>

using namespace std;
#define mx 1048580
double a[mx],r1;
long long int p1[1109],p[1109],m=0;
void prime(){
    int i,j;
    for(i=2;i<=sqrt(1100);i++){
        if(p1[i]==0)
            for(j=2*i;j<=1100;j+=i)p1[j]=1;
    }
    for(i=2;i<=1100;i++){
        if(p1[i]==0){
            p[m]=i;
            m++;
        }
    }
}
int main(){
    prime();
    long long int n,b,i,r,n1,b1,res,z,x;
    for(i=1;i<=mx;i++){
        a[i]=a[i-1]+log10(i);
    }
    while(cin>>n>>b){
        r=floor((a[n]/log10(b))+1e-9)+1;
        res=1000000000000;
        z=1;
        for(i=0;i<m;i++){
            if(b%p[i]==0){
                b1=n1=0;
                while(b%p[i]==0){
                    b=b/p[i];
                    b1++;
                }
                x=p[i];
                while(n/x){
                    n1+=n/x;
                    x=x*p[i];
                }
                if(b1>n1){z=0;break;}
                else res=min(res,n1/b1);
            }
            if(z==0||b==1)break;
        }
        if(b!=1&&z==1){
            b1=1;
            n1=0;
            x=b;
            while(n/x){
                n1+=n/x;
                x=x*b;
            }
            if(b1>n1){z=0;}
            else res=min(res,n1/b1);
        }
        if(z==0)res=0;
        cout<<res<<" "<<r<<endl;
    }
    return 0;
}
