#include<stdio.h>
#include<math.h>
int a[100001]={0};
void prime(){
    int i,j,k=2;
    a[0]=a[1]=1;
    for(i=2;i<=sqrt(100000);i++){
        for(j=2*k;j<=100000;j+=k)a[j]=1;
        k++;
        while(a[k]==1)k++;
    }
}
int main(){
    prime();
    char s[255];
    int b,i,j,max,l;
    while(scanf("%s",s)){
        l=strlen(s);
        if(l==1&&s[0]=='0')break;
        max=0;
        for(i=0;i<l;i++){
            b=0;
            for(j=i;j<=i+4&&j<l;j++){
                b=b*10+s[j]-'0';
                if(a[b]==0){
                    if(b>max)max=b;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
