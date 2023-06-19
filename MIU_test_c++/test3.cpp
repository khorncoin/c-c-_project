#include<iostream>
using namespace std;

int main () {
   static char a3[] = {'a','b','c'};
   int sart =0;
   int len =2;
   if(sart < 0 || len<0 || sart+len-1 >= 3 ){
      cout<< "null";
   }
   char sub[] = {};
   for(int i =sart, j= 0 ; j<len ; i++ , j++){
    sub[j]= a3[i];
   }
   cout<< sub;
}