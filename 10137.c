 #include<stdio.h>

int main()
{
    double c,s,av,d;
    int j,n,i,a[1000],p,r;
    for(i=1;i>=1;i++){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        s=0;
        for(j=0;j<n;j++){
            scanf("%d .%d",&p,&r);
            a[j]=p*100+r;
            s+=a[j];
        }
        av=((double)s)/n;
        c=0;
        d=0;
        for(j=0;j<n;j++){
            if(av>a[j]){
                c+=(int)(av-a[j])/100.0;
            }
            else if(av<a[j]){
                d+=(int)(a[j]-av)/100.0;
            }
        }
        if(c>=d){
            printf("$%.2lf\n",c);
        }
        else{
            printf("$%.2lf\n",d);
        }
    }
    return 0;
}
