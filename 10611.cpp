#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[50009],i,n,q,r,l,m,h,qr,j,left,right;
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    cin>>qr;
    for(i=1;i<=qr;i++){
        cin>>q;
        l=0;
        h=n-1;
        r=0;
        while(l<=h){
            m=(l+h)/2;
            if(a[m]==q){
                for(j=m-1;j>=0;j--){
                    if(a[j]!=q){left=j;break;}
                }
                for(j=m+1;j<n;j++){
                    if(a[j]!=q){right=j;break;}
                }
                r=1;
                break;
            }
            else if(q>a[m])l=m+1;
            else h=m-1;
        }
        if(r){
            if(q>=a[n-1])printf("%d X\n",a[left]);
            else if(q<=a[0])printf("X %d\n",a[right]);
            else printf("%d %d\n",a[left],a[right]);
        }
        else{
            if(q<a[0])printf("X %d\n",a[0]);
            else if(q>a[n-1])printf("%d X\n",a[n-1]);
            else printf("%d %d\n",a[h],a[l]);
        }
    }
    return 0;
}
