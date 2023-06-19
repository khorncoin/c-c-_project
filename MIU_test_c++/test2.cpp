#include<iostream>
using namespace std;

int main(){
    static int a2[]={};
    int x=0;
    int y=0;
    for(int i=0;i<0;i++){
        if (a2[i]%2 == 0)
        {
            y +=a2[i];
            // cout<< y;
        }
        else{
            x += a2[i];
            // cout<< x;
        }
    };
    cout<< x-y;
}