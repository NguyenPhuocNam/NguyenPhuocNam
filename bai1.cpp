#include <iostream>
using namespace std;
int main(){
 int n,a,b;
 int sum = 0;
 cin>> n>>a>>b;
 for(int i=1;i<=n;i++){
        int s=0,y=i;
        while (y>0){
        s+= y%10;
        y/=10;
        }
        if(a<= s && s<=b){
           sum+= i;
        }
    }
    cout <<sum;
}
