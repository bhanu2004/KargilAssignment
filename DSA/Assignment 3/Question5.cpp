#include <bits/stdc++.h>
using namespace std;


int revrseNum(int num1){
    stack <int> stck;
   int revrs = 0;
   int i = 1;
   int temp;
   int topp;
   
   int rem;
   while (num1 > 0){
      rem=num1 % 10;
      stck.push(rem);
      num1 = num1 / 10;
   }
   
   while (!stck.empty()){
      topp=stck.top();
      stck.pop();
      temp=topp*i;
      revrs = revrs + temp;
      i *= 10;
   }
   return revrs;
}
int main(){
   int Num = 12576;
   cout<<"Original Number: "<<Num<<endl;
   cout<<"Reverse of number is: "<<revrseNum(Num);
   return 0;
}