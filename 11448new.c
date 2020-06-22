#include<stdio.h>
#include<string.h>

char a[20000009],b[20000009],c[20000009],v[20000009],r[20000009];
int keboro(char a[],char b[],int a1,int b1,int l,int k){
        int h,i,j;
        h=0;
        for(i=l,j=k;i<a1&&j<b1;i++,j++){
            if(a[i]>b[j]){return 0;}
            else if(a[i]<b[j])return 1;
            if(a[i]==b[j])h++;
        }
        if(h==a1-l)return 2;
}
int main(){
    int i,j,a1,b1,t,z,d,e,f,g,m,hc,hv,o,re,k,ch,c1,v1,x,p,q;
    scanf("%d",&t);
    getchar();
    while(t--){
        scanf("%s %s",c,v);
        i=j=0;
        while(c[i]=='0')i++;
        while(v[j]=='0')j++;
        for(p=i,q=0;c[p]!='\0';p++,q++)a[q]=c[p];
        a[q]='\0';
        for(p=j,q=0;v[p]!='\0';p++,q++)b[q]=v[p];
        b[q]='\0';
        a1=strlen(a);b1=strlen(b);
        o=1;k=g=0;
        if(a[0]=='-'||b[0]=='-'){
            if(a[0]=='-'&&b[0]=='-'){
                if(a1>b1){strcpy(c,a);strcpy(v,b);ch=0;}
                if(a1==b1){
                    if(keboro(a,b,a1,b1,1,1)==0){strcpy(c,a);strcpy(v,b);ch=0;}
                    else if(keboro(a,b,a1,b1,1,1)==1){strcpy(c,b);strcpy(v,a);ch=1;}
                    else o=0;
                }
                else{strcpy(c,b);strcpy(v,a);ch=1;}
                hc=hv=1;
            }
            else{
                if(a[0]=='-'){
                    if(a1-1>b1){strcpy(c,a);strcpy(v,b);hc=1;hv=0;ch=0;}
                    else{strcpy(c,b);strcpy(v,a);hc=0;hv=1;ch=0;}
                }
                else{
                    if(a1>b1-1){strcpy(c,a);strcpy(v,b);hc=0;hv=1;}
                    else {strcpy(c,b);strcpy(v,a);hc=1;hv=0;}
                    ch=1;
                }
                g=1;
            }
        }
        else{
            if(a1>b1){strcpy(c,a);strcpy(v,b);ch=1;}
            else if(a1<b1){strcpy(c,b);strcpy(v,a);ch=0;}
            else{
                if(keboro(a,b,a1,b1,0,0)==0){strcpy(c,a);strcpy(v,b);ch=1;}
                else if(keboro(a,b,a1,b1,0,0)==1){strcpy(c,b);strcpy(v,a);ch=0;}
                else o=0;
            }
            hc=hv=0;
        }
        if(o==0){printf("0\n");continue;}
        c1=strlen(c);v1=strlen(v);
        if(g==1){
                m=re=0;
            for(i=c1-1,j=v1-1;i>=hc&&j>=hv;i--,j--){
                d=c[i]+v[j]-96+re;
                r[m]=d%10+'0';
                m++;
                re=d/10;
            }
            while(i>=hc){
                d=c[i]-'0'+re;
                r[m]=d%10+'0';
                m++;re=d/10;
                i--;
            }
            if(re>0){r[m]=re+'0';m++;}
            if(ch==0)printf("-");
            k=m-1;
            while(r[k]=='0')k--;
            for(i=k;i>=0;i--)printf("%c",r[i]);
            printf("\n");continue;
        }
        z=m=x=0;
        for(i=c1-1,j=v1-1;i>=hc&&j>=hv;i--,j--){
            if(c[i]<v[j]+z){d=c[i]-'0'+10;x=1;}
            else d=c[i]-'0';
            f=d-v[j]+'0'-z;
            z=0;
            r[m]=f+'0';
            m++;
            if(x==1){z=1;x=0;}
        }
        while(i>=hc){
            if(c[i]<z+'0'){d=c[i]-'0'+10;x=1;}
            else d=c[i]-'0';
            f=d-z;
            z=0;
            r[m]=f+'0';
            m++;i--;
            if(x==1){z=1;x=0;}
        }
        if(z>0){r[m]=z+'0';m++;}
        if(ch==0)printf("-");
        k=m-1;
        while(r[k]=='0')k--;
        for(i=k;i>=0;i--)printf("%c",r[i]);
        printf("\n");
    }
    return 0;
}
