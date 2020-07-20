#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/practice-problems/algorithm/vowel-game-f1a1047c/submissions/
int main() {
    int cases=0;
    cin>>cases;
    string vowels="aeiouAEIOU";
    for(int k=0;k<cases;k++)
    {
        int vowelsIndexCounter=0;
        vector<int> vowelIndex; 
        string strng;
        cin>>strng;
        for(int i = 0; i<strng.length(); i++){
            int index=vowels.find(strng[i]);
            if(index>=0){
            	vowelIndex.push_back(vowelsIndexCounter);
        	}
        vowelsIndexCounter++;
        }
        long totalvowels=0;
        for (auto i = vowelIndex.begin(); i != vowelIndex.end(); ++i) 
        {
            int data=*i;
            totalvowels+=((data+1)*(strng.length()-data));
        }
         cout<<totalvowels<<"\n";
    }

return 0;

}