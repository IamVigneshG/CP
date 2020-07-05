#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void getPrimeNumbersTill(int number, int* primeNumbers){
   
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
}

int findNearestPrime(int number,int* primeNumbers ){
 int incrementer = -1;
 int multiplier = -1;
 int count = 1;
 while (true){
    if(primeNumbers[number] == 1 && number <122){
       return number;
    }
    else{
      //  cout<< "else " << number << endl;
       number = number+incrementer;
       multiplier = -1 * multiplier;
       count = count+1;
       incrementer = multiplier*count;
    }

 }

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	/* code */
#endif
   int number =122;
   int NoOfTestCases;
   cin >> NoOfTestCases;
   if(1<=NoOfTestCases && NoOfTestCases<=100){
      int primeNumbers[number+1];
      getPrimeNumbersTill(number, primeNumbers);
      int it = 0;
       while(it<NoOfTestCases){
         int lengthOfWord;
         cin >> lengthOfWord;
            if(1<=lengthOfWord && lengthOfWord<=500){
               char letter[lengthOfWord];
               cin >> letter;
               for(int i=0;i<(strlen(letter));i++){
                 
                  if((int)letter[i] <65 ){
                    letter[i] = 'A';
                  }
                  if( (int)letter[i] >122){
                     letter[i] = 'z';
                  }
                  if(primeNumbers[(int)letter[i]]==0){
                     int replaced = findNearestPrime((int)letter[i],primeNumbers);
                     letter[i]=(char) replaced;
                 }
               }
               cout << letter <<endl;
             
            }
            else {
            cin.ignore(256,'\n');
            cin.ignore(256,'\n');
            cout << "Invalid string constraints"<<endl;
            }
            it++;
      }
   }
   else{
         cout << "invalid TestCase Constraints";
   }
   
}