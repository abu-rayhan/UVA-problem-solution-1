#include<bits/stdc++.h>

using namespace std;
struct node{
    int r,c;
};
int fx[]={-2,-2,-1,1,-1,1,2,2};
int fy[]={-1,1,2,2,-2,-2,1,-1};
int main(){
    char g[5],h[5];
    int x,y,a,b;
    while(cin>>g>>h){
        int ar[10][10]={0};
        node n,u;
        y=g[0]-96;
        x=g[1]-'0';
        a=h[1]-'0';
        b=h[0]-96;
        n.r=x;
        n.c=y;
        queue<node>q;
        q.push(n);
        ar[n.r][n.c]=1;
        while(!q.empty()){
            u=q.front();
            q.pop();
            for(int i=0;i<8;i++){
                n.r=u.r+fx[i];
                n.c=u.c+fy[i];
                if(n.r>=1&&n.r<=8&&n.c>=1&&n.c<=8&&(ar[n.r][n.c]==0)){
                    ar[n.r][n.c]=ar[u.r][u.c]+1;
                    q.push(n);
                }
            }
            if(ar[a][b]!=0)break;
        }
        if(ar[a][b]==0)ar[a][b]=1;
        cout<<"To get from "<<g<<" to "<<h<<" takes "<<ar[a][b]-1<<" knight moves."<<endl;
    }
    return 0;
}
