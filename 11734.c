#include<stdio.h>
#include<string.h>

int main(){
    int t,i,l,l1,l2,k,n,m;
    char tm[30],j[30],t2[30];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++){
        gets(tm);
        gets(j);
        n=0;
        for(l=0;tm[l]!='\0';l++){
            if(tm[l]==' ')continue;
            else{t2[n]=tm[l];n++;}
        }
        t2[n]='\0';
        l1=strlen(t2);
        l2=strlen(j);
        if(l2!=l1){
            printf("Case %d: Wrong Answer\n",i);
            continue;
        }
        else{
            for(k=0;j[k]!='\0';k++){
                if(j[k]!=t2[k]){
                    m=1;
                    printf("Case %d: Wrong Answer\n",i);
                    break;
                }
            }
        }
        if(m==1){m=0;continue;}
        for(l=0;tm[l]!='\0';l++){
            if(tm[l]==' '){
                printf("Case %d: Output Format Error\n",i);
                break;
            }
        }
        if(strcmp(tm,j)==0)printf("Case %d: Yes\n",i);
    }
    return 0;
}
