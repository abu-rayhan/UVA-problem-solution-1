#include<stdio.h>

int main(){
    int i,l;
    char a[10];
    for(i=1;i>=1;i++){
        scanf("%s",a);
        if(a[0]=='*')break;
        l=strlen(a);
        if(l==4){
            if(a[0]=='H'&&a[1]=='a'&&a[2]=='j'&&a[3]=='j')printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(l==5){
            if(a[0]=='U'&&a[1]=='m'&&a[2]=='r'&&a[3]=='a'&&a[4]=='h')
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
    }
    return 0;
}
