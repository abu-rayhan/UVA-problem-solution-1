#include<stdio.h>

int main(){
    int t,l,a[100],b[100],i;
     char er = '"';
    scanf("%d",&t);
    while(t--){
        scanf("%d",&l);
        for(i=0;i<l;i++)scanf("%d",&a[i]);
        for(i=0;i<l;i++)scanf("%d",&b[i]);
        for(i=0;i<l;i++){
            if(a[i]==1){
                if(b[i]==1)printf(".");
                else if(b[i]==2)printf(",");
                else if(b[i]==3)printf("?");
                else if(b[i]==4)printf("%c",er);
            }
            else if(a[i]==2){
                if(b[i]==1)printf("a");
                else if(b[i]==2)printf("b");
                else if(b[i]==3)printf("c");
            }
            else if(a[i]==3){
                if(b[i]==1)printf("d");
                else if(b[i]==2)printf("e");
                else if(b[i]==3)printf("f");
            }
            else if(a[i]==4){
                if(b[i]==1)printf("g");
                else if(b[i]==2)printf("h");
                else if(b[i]==3)printf("i");
            }
            else if(a[i]==5){
                if(b[i]==1)printf("j");
                else if(b[i]==2)printf("k");
                else if(b[i]==3)printf("l");
            }
            else if(a[i]==6){
                if(b[i]==1)printf("m");
                else if(b[i]==2)printf("n");
                else if(b[i]==3)printf("o");
            }
            else if(a[i]==7){
                if(b[i]==1)printf("p");
                else if(b[i]==2)printf("q");
                else if(b[i]==3)printf("r");
                else if(b[i]==4)printf("s");
            }
            else if(a[i]==8){
                if(b[i]==1)printf("t");
                else if(b[i]==2)printf("u");
                else if(b[i]==3)printf("v");

            }
            else if(a[i]==9){
                if(b[i]==1)printf("w");
                else if(b[i]==2)printf("x");
                else if(b[i]==3)printf("y");
                else if(b[i]==4)printf("z");
            }
            else if(a[i]==0)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
