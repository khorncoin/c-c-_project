#include<iostream>
using namespace std;

int main(){
    static int a1[]={10};
    if(a1==NULL || 1 % 2==0) {
        cout<< 0;
        }
    int midIndex=1/2;
    int midItem = a1[midIndex];
    for(int i=0;i<1;i++){
        if(i!=midIndex&&midItem>=a1[i]) 
         cout<<0;
    }

    cout<< 1;

}