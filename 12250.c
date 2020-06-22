#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char se[]="HELLO",sf[]="BONJOUR",sg[]="HALLO",si[]="CIAO",sr[]="ZDRAVSTVUJTE",ss[]="HOLA",sc[100];
    for(i=1;i>=1;i++){
        scanf("%s",sc);
        if(sc[0]=='#')break;
        if(strcmp(se,sc)==0)printf("Case %d: ENGLISH\n",i);
        else if(strcmp(ss,sc)==0)printf("Case %d: SPANISH\n",i);
        else if(strcmp(sg,sc)==0)printf("Case %d: GERMAN\n",i);
        else if(strcmp(sf,sc)==0)printf("Case %d: FRENCH\n",i);
        else if(strcmp(si,sc)==0)printf("Case %d: ITALIAN\n",i);
        else if(strcmp(sr,sc)==0)printf("Case %d: RUSSIAN\n",i);
        else printf("Case %d: UNKNOWN\n",i);
    }
    return 0;
}
