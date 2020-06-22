#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
    ll cow,car,s;
    while(cin>>cow>>car>>s){
        ll t=cow+car;
        double a=car/((t-s-1)*1.0);
        double b=(car-1)/((t-s-1)*1.0);
        double r=a*(cow)+b*car;

        cout<<setprecision(5)<<fixed<<r/t<<endl;
    }
    return 0;
}
