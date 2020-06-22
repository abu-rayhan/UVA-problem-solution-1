#include<stdio.h>
#include<string.h>

int main(){
    char s[1000009],t[1000009];
    int i,j,k,c1,c,z,l;
    while(scanf("%s %s",s,t)!=EOF){
        c1=strlen(s);
        z=0;
        for(i=0;t[i]!='\0';i++){
            if(t[i]==s[0]){
                k=i+1;
                c=1;
                for(j=k,l=1;t[j]!='\0'&&s[l]!='\0';j++){
                    if(t[j]==s[l]){
                        c++;l++;
                    }
                }
                if(c==c1){z=1;break;}
            }
        }
        if(z==1)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
