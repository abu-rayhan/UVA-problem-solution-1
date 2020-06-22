#include<stdio.h>

int main(){
    char
    int a,b,i,j,c,t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        a=s[0]-96;
        b=s[1]-'0';
        c=0;
        if(a+2>=1&&a+2<=8){
            if(b-1>=1&&b-1<=8)c++;
            if(b+1>=1&&b+1<=8)c++;
        }
        if(a-2>=1&&a-2<=8){
            if(b-1>=1&&b-1<=8)c++;
            if(b+1>=1&&b+1<=8)c++;
        }
        if(b-2>=1&&b-2<=8){
            if(a+1>=1&&a+1<=8)c++;
            if(a-1>=1&&a-1<=8)c++;
        }
        if(b+2>=1&&b+2<=8){
            if(a+1>=1&&a+1<=8)c++;
            if(a-1>=1&&a-1<=8)c++;
        }
        printf("%d\n",c);
    }
    return 0;
}

