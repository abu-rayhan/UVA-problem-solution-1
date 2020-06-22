#include<stdio.h>
#include<string.h>

int main(){
    int n,c,c1,i,j,k,l;
    char str[10],O[3]={'o','n','e'};
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",str);
        l=strlen(str);
        if(l==3){
            c1=0;
            for(j=0;j<l;j++){
                c=0;
                for(k=0;k<l;k++){
                    if(O[j]==str[k])c++;
                }
                if(c>0)c1++;
            }
            if(c1>=2)printf("1\n");
            else printf("2\n");
        }
        else if(l==5)printf("3\n");
    }
    return 0;
}
