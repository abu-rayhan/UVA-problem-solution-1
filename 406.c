#include<stdio.h>
#include<math.h>
int a[1001]={0},p[170],ar[1001];
void prime(){
    int i,j,k=2,c;
    for(i=2;i<=sqrt(1000);i++){
        for(j=2*k;j<=1000;j+=k)a[j]=1;
        k++;
        while(a[k]==1)k++;
    }
    ar[1]=1;
    p[0]=1;p[1]=2;c=2;
    ar[2]=c;
    for(i=3;i<=1000;i+=2){
        if(a[i]==0){p[c]=i;c++;}
        ar[i]=ar[i+1]=c;
    }
}
int main(){
    prime();
    int n,c,d,i;
    while(scanf("%d %d",&n,&c)!=EOF){
        d=ar[n];
        printf("%d %d:",n,c);
        if(d%2==0){
            if(2*c>d){
                for(i=0;i<d;i++)printf(" %d",p[i]);
                printf("\n\n");
                continue;
            }
            for(i=d/2-c;i<d/2+c;i++){
                printf(" %d",p[i]);
            }
            printf("\n\n");
        }
        else{
            if(d/2-c+1<0||d/2+c-1>d-1){
                for(i=0;i<d;i++)printf(" %d",p[i]);
                printf("\n\n");
                continue;
            }
            for(i=d/2-c+1;i<=d/2;i++){
                printf(" %d",p[i]);
            }
            for(i=d/2+1;i<=d/2+c-1;i++)printf(" %d",p[i]);
            printf("\n\n");
        }
    }
    return 0;
}
