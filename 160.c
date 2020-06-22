#include<stdio.h>
#include<math.h>

int main(){
    int a[50]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int i,n;
    while(scanf("%d",&n)&&n){
        int b[109]={0},c,m,z;
        for(i=0;i<25;i++){
            m=1;
            c=0;
            while((n/pow(a[i],m))!=0){
                c+=n/pow(a[i],m);
                m++;
            }
            b[i]=c;
        }
        m=0;
        while(b[m]>0&&m<25)m++;
        printf("%3d! =",n);
        c=z=0;
        for(i=0;i<m-1;i++){
            c++;
            printf("%3d",b[i]);
            if(c==15){z=1;c=0;printf("\n");}
            if(z==1){printf("      ");z=0;}
        }
        printf("%3d\n",b[m-1]);
    }
    return 0;
}
