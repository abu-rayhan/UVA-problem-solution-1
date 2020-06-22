#include<stdio.h>
#include<math.h>

int main(){
    char s[100];
    long long r[100],m,s1,i,l,j,t,p,k,z;
    while(scanf("%s",s)){
        if(s[0]=='-')break;
        if(s[1]=='x'){
            l=strlen(s);
            s1=0;
            for(i=l-1,j=0;i>1;i--,j++){
                p=1;
                for(k=1;k<=j;k++)p=p*16;
                if(s[i]>='A'&&s[i]<='F')z=s[i]-55;
                else z=s[i]-'0';
                s1+=z*p;
            }
            printf("%lld\n",s1);
        }
        else{
            s1=0;
            for(i=0;s[i]!='\0';i++){
                s1=s1*10+s[i]-'0';
            }
            m=0;
            while(s1!=0){
                t=s1%16;
                r[m]=t;
                s1/=16;
                m++;
            }
            printf("0x");
            for(i=m-1;i>=0;i--){
                if(r[i]>9){
                    if(r[i]==10)printf("A");
                    else if(r[i]==11)printf("B");
                    else if(r[i]==12)printf("C");
                    else if(r[i]==13)printf("D");
                    else if(r[i]==14)printf("E");
                    else printf("F");
                }
                else printf("%d",r[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
