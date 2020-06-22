#include<stdio.h>

int main(){
    int t,q,c,l,l1,k,p,i;
    char s[100005],s1[1005];
    scanf("%d",&t);
    while(t--){
        scanf("%s %d",s,&q);
        l=strlen(s);
        while(q--){
            scanf("%s",s1);
            l1=strlen(s1);
            if(l1>l){printf("n\n");continue;}
            for(i=0;i<l1;i++){
                if(s[i]==s1[0])
                    {
                        c=0;
                        p=i;
                        k=0;
                    while(k<l1){
                        if(s[p]==s1[k]){
                            c++;
                            k++;
                            p++;
                        }
                        else break;
                    }
                    if(c==l1){
                        printf("y\n");
                        break;
                    }
                }
            }
            if(c!=l1)printf("n\n");
        }

    }
    return 0;
}
