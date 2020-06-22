#include<stdio.h>

int main(){
    int i,j,m,z=0;
    char s[1009];
    while(gets(s)){
            if(z==1)printf("\n");
        int a[130]={0},b[130]={0};
        for(i=0;s[i]!='\0';i++){a[s[i]]++;b[s[i]]++;}
        for(i=30;i<130;i++){
            for(j=i+1;j<130;j++){
                if(a[i]>a[j]){
                    m=a[j];
                    a[j]=a[i];
                    a[i]=m;
                }
            }
        }
        for(i=30;i<130;i++){
            if(a[i]>0&&a[i]!=a[i+1])
            for(j=129;j>=0;j--){
                if(a[i]==b[j])
                printf("%d %d\n",j,b[j]);
            }
        }
        z=1;
    }
    return 0;
}
