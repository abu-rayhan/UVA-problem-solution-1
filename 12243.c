#include<stdio.h>

int main(){
    int ic,dc,ki;
    char as[1005],ch,cs;
    for(ic=1;ic>=1;ic++){
        gets(as);
        if(as[0]=='*')break;
        if((as[0]>='a'&&as[0]<='z')||(as[0]>='A'&&as[0]<='Z')){
            ch=as[0];
            if(ch>='a'&&ch<='z')cs='A'+(ch-'a');
            else cs='a'+(ch-'A');
        }
        dc=0;
        for(ic=1;as[ic]!='\0';ic++){
            ki=ic;
            if(as[ki]==' '){
                if((as[ki+1]!=ch)&& (as[ki+1]!=cs)){
                    dc++;
                }
            }
        }
        if(dc==0)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
