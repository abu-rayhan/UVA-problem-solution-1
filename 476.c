#include<stdio.h>

int main(){
    double r[1000][4],x,y,m,n,p,q;
    int i,k=0,j,z;
    char c;
    for(i=0;i>=0;i++){
        scanf("%c",&c);
        if(c=='*')break;
        scanf("%lf %lf %lf %lf",&r[i][0],&r[i][1],&r[i][2],&r[i][3]);
        k++;
        getchar();
    }
    for(i=0;i>=0;i++){
        scanf("%lf %lf",&x,&y);
        if(x==9999.9&&y==9999.9)break;
        z=0;
        for(j=0;j<k;j++){
            if(r[j][0]>r[j][2]){p=r[j][0];q=r[j][2];}
            else{p=r[j][2];q=r[j][0];}
            if(r[j][1]>r[j][3]){m=r[j][1];n=r[j][3];}
            else{m=r[j][3];n=r[j][1];}
            if(x<p&&x>q&&y<m&&y>n){
                z=1;
                printf("Point %d is contained in figure %d\n",i+1,j+1);
            }
        }
        if(z==0)printf("Point %d is not contained in any figure\n",i+1);
    }
    return 0;
}
