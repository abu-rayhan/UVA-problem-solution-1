#include<stdio.h>

int main(){
    char s[109][50];
    int d[109],m[109],b[109],max,min,ma=0,mi=0,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s %d %d %d",s[i],&d[i],&m[i],&b[i]);
    }
    max=min=b[0];
    for(i=0;i<t;i++){
        if(min>b[i]){
            min=b[i];
            mi=i;
        }
        if(max<b[i]){
            max=b[i];
            ma=i;
        }
    }
    for(i=0;i<t;i++){
        if(min==b[i]){
            if(m[i]<m[mi])mi=i;
            else if(m[i]==m[mi]){
                if(d[i]<d[mi])mi=i;
            }
        }
        if(max==b[i]){
            if(m[i]>m[ma])ma=i;
            else if(m[i]==m[ma]){
                if(d[i]<d[ma])ma=i;
            }
        }
    }
    printf("%s\n%s\n",s[ma],s[mi]);
    return 0;
}
