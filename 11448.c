#include<stdio.h>
#include<string.h>

char a[20000009],b[20000009],c[20000009],v[20000009],r[20000009];
char keboro(char a[],char b[],int a1){
        int h,z,i;
        z=1;
        h=0;
        for(i=0;i<a1;i++){
            if(a[i]>b[i]){z=0;break;}
            if(a[i]==b[i])h++;
        }
        if(h==a1)z=0;
        return z;
}
int main(){
    int i,j,a1,b1,k,t,l,z,l1,x,d,e,f,p,h,g,cr;
    scanf("%d",&t);
    while(t--){
        scanf("%s %s",a,b);
        a1=strlen(a);b1=strlen(b);
        if((a[0]=='-'&&b[0]!='-')||(a[0]!='-'&&b[0]=='-')){
            if(a[0]=='-'&&b[0]!='-'){
                g=1;
                if(a1-1>=b1){strcpy(c,a);strcpy(v,b);}
                else{strcpy(c,b);strcpy(v,a);}
            }
            else{
                g=0;
                if(a1>=b1-1){strcpy(c,a);strcpy(v,b);}
                else{strcpy(c,b);strcpy(v,a);}
            }
            l=strlen(c);l1=strlen(v);
            cr=0;
            for(x=0,i=l-1,j=l1-1;i>=0&&j>=0;i--,j--){
                if(c[i]!='-'&&v[j]!='-'){
                    d=c[i]-'0'+v[j]-'0'+cr;
                    r[x]=d%10+'0';cr=d/10;
                    x++;
                }
            }
            while(i>=0){
                if(c[i]!='-'){
                    d=c[i]-'0'+cr;
                    r[x]=d%10+'0';cr=d/10;
                    x++;
                }
                i--;
            }
            if(cr>0){r[x]=cr+'0';x++;}
            if(g==1)printf("-");
            for(i=x-1;i>=0;i--)printf("%c",r[i]);
            printf("\n");
            continue;
        }
        if(a[0]=='-'&&b[0]=='-')g=1;
        else g=0;
        if(a1==b1){
           if(keboro(a,b,a1)==0){p=0;strcpy(c,a);strcpy(v,b);}
            else{p=1;strcpy(v,a);strcpy(c,b);}
            if(g==1)p=0;
        }
        else if(a1>b1){p=0;strcpy(c,a);strcpy(v,b);}
        else{p=1;strcpy(v,a);strcpy(c,b);}
        l=strlen(c);l1=strlen(v);
        f=0;
        for(i=l-1,j=l1-1,x=0;i>=g&&j>=g;i--,j--,x++){
            d=c[i]-'0';e=v[j]-'0'+f;
            if(f==1)f=0;
            if(d<e){
                d+=10;
                f=1;
                r[x]=d-e+'0';
            }
            else r[x]=d-e+'0';
        }
        while(i>=g){
            d=c[i]-'0';e=f;
            if(f==1)f=0;
            if(d<e){
                d+=10;
                f=1;
                r[x]=d-e+'0';
            }
            else r[x]=d-e+'0';
            i--;x++;
        }
        while(r[x-1]=='0')x--;
        if(p==1)printf("-");
        if(x>0)
        for(i=x-1;i>=0;i--)printf("%c",r[i]);
        else printf("0");
        printf("\n");
    }
    return 0;
}
