#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void getPrimeNumbersTill(int number){
   int primeNumbers[number+1];
  
   for(int i=0;i<number+1 ;i++){
      primeNumbers[i]= 1;
   }
   int p=2;
   while(p * p <=number ){
      if ( primeNumbers[p]==1){
         for ( int i=p*p;i<number+1;i=i+p){
            primeNumbers[i]=0;
         }
      }
      p=p+1;
   }
   for(int i=2;i<=number;i++){
      if(primeNumbers[i]==1){
         cout<< i<<endl;
      }
   }
   return;
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	/* code */
#endif
   int n;
   cin >> n;
   cout<< "prime numbers till : " << n << ":" << endl;
   getPrimeNumbersTill(n);

}