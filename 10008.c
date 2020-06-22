#include<stdio.h>

char s[1000][10000];
int main(){
    int t,i,a[150]={0},b[30],m,j,x;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++){gets(s[i]);}
    for(i=0;i<t;i++){
        for(j=0;s[i][j]!='\0';j++){
            if(s[i][j]>='a'&&s[i][j]<='z')s[i][j]-=32;
        }
    }

    for(i=0;i<t;i++){
        for(j=0;s[i][j]!='\0';j++){
            a[s[i][j]]++;
        }
    }
    m=0;
    for(i=65;i<93;i++){b[m]=a[i];m++;}
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            if(b[i]<b[j]){
                x=b[i];
                b[i]=b[j];
                b[j]=x;
            }
        }
    }
    int z=1;
    for(i=0;i<m;i++){
        if(b[i]>0){
            for(j=65;j<91;j++){
                if(a[j]>0)
                if(b[i]==a[j]){
                    printf("%c %d\n",j,b[i]);
                    a[j]=0;
                }
            }
        }
    }
    return 0;
}
