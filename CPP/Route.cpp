#include <string>
#include <iostream>
using namespace std;
// Question URL
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/submissions/ 



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	/* code */
#endif
   
	string name;
   bool fail= false;
   cin >> name;
   int x ,y ;
   x=y=0;
   int inputLength = name.length();
   if(inputLength >= 1 && inputLength <= 200){
   for ( int i = 0; i<inputLength;i++){
      if(name[i]=='L'){
         x-=1;
      }
      else if (name[i]=='R')
      {
        x+=1;
      }
      else if(name[i]=='U'){
         y+=1;
      }
      else if (name[i]=='D'){
         y-=1;
      }
      else{
         fail = true;
        break;
      }
   }
   if(fail == false){
   cout << x <<" "<< y ;
   }
   else {
      cout<< "Wrong Entry Found";
   }
   }
   else {
      cout << "Input length not valid";
   }
}