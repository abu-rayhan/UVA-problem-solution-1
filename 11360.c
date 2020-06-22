#include<stdio.h>
#include<string.h>

int main(){
    int t,n,m,i,j,r,c,x,y,k,f,g,z;
    char s[109],a[15][15],b[15][15];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(r=0;r<n;r++){
            scanf("%s",a[r]);
        }
        scanf("%d",&m);
        getchar();
        for(k=1;k<=m;k++){
            scanf("%s",s);
            if(s[0]=='r'){
                scanf("%d %d",&x,&y);
                for(c=0;c<n;c++){
                    f=a[y-1][c]-'0';
                    g=a[x-1][c]-'0';
                    a[x-1][c]=f+'0';
                    a[y-1][c]=g+'0';
                }
            }
            else if(s[0]=='c'){
                scanf("%d %d",&x,&y);
                for(r=0;r<n;r++){
                    g=a[r][y-1]-'0';
                    f=a[r][x-1]-'0';
                    a[r][x-1]=g+'0';
                    a[r][y-1]=f+'0';
                }
            }
            else if(s[0]=='i'){
                for(r=0;r<n;r++){
                    for(c=0;c<n;c++){
                        f=(a[r][c]-'0'+1)%10;
                        a[r][c]=f+'0';
                    }
                }
            }
            else if(s[0]=='d'){
                for(r=0;r<n;r++){
                    for(c=0;c<n;c++){
                        f=(a[r][c]-'0'-1);
                        if(f<0)f=9;
                        else f=f%10;
                        a[r][c]=f+'0';
                    }
                }
            }
            else if(s[0]=='t'){
                for(r=0;r<n;r++){
                    for(c=0;c<n;c++){
                        f=a[c][r]-'0';
                        b[r][c]=f+'0';
                    }
                }
                for(r=0;r<n;r++)strcpy(a[r],b[r]);
            }
        }
        printf("Case #%d\n",i);
        for(r=0;r<n;r++){
            for(c=0;c<n;c++)printf("%c",a[r][c]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
