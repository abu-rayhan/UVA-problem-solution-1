#include<stdio.h>
#include<math.h>

int main(){
    int t,i,j,l,c,a1,b1,x1,ar[402],k,d;
    char a[201],b[201],x;
    scanf("%d",&t);
        getchar();
    while(t--){
        scanf("%s %s",a,b);
        a1=strlen(a);b1=strlen(b);
        for(i=a1-1,j=0;i>=a1/2;i--,j++){
            x=a[j];
            a[j]=a[i];
            a[i]=x;
        }
        for(i=b1-1,j=0;i>=b1/2;i--,j++){
            x=b[j];
            b[j]=b[i];
            b[i]=x;
        }
    printf("%s %s\n",a,b);
        c=0;
        for(i=a1-1,j=b1-1,x1=0;i>=0&&j>=0;i--,j--,x1++){
            d=a[i]-'0'+b[j]-'0'+c;
            ar[x1]=d%10;
            c=d/10;
        }
        while(i>=0){
            ar[x1]=(a[i]-'0'+c)%10;
            c=(a[i]-'0'+c)/10;
            i--;x1++;
        }
        while(j>=0){
            ar[x1]=(b[j]-'0'+c)%10;
            c=(b[j]-'0'+c)/10;
            j--;x1++;
        }
        if(c>0){ar[x1]=c;x1++;}
        i=0;
        while(ar[i]==0)i++;
        for(k=i;k<x1;k++)printf("%d",ar[k]);
        printf("\n");
    }
    return 0;
}
