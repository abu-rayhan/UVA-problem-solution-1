#include<stdio.h>

int main(){
    char s[1000],a[1000];
    int l1,l2,i,j,n,c,d;
    while(scanf("%d",&n)){
        if(n==-1)break;
        scanf("%s %s",s,a);
        l1=strlen(s);
        l2=strlen(a);
        int ar[130]={0},a1[130]={0};
        for(i=0;i<l1;i++)ar[s[i]]++;
        c=d=0;
        for(i=0;i<l2;i++){
            if(a[i]!=a[i+1]){
            if(ar[a[i]]>0&&ar[a[i]]!=1000){c+=ar[a[i]];ar[a[i]]=1000;a1[a[i]]=1;}
            else if(a1[a[i]]==0){d++;a1[a[i]]=1;}
            if(c>=l1&&d<7){printf("Round %d\nYou win.\n",n);break;}
            else if(c<l1&&d>=7){printf("Round %d\nYou lose.\n",n);break;}
            }
        }
        if(d<7&&c<l1)printf("Round %d\nYou chickened out.\n",n);
    }
    return 0;
}
