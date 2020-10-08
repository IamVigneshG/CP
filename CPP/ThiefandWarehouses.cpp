
#include<bits/stdc++.h> 
using namespace std; 
  

unsigned long long int getMax(unsigned long long int hist[], unsigned long long int n) 
{ 

    stack<unsigned long long int> s; 
  
    unsigned long long int max_area = 0; // Initialize max area 
    unsigned long long int tp;  // To store top of stack 
    unsigned long long int area_with_top; // To store area with top bar 
                       // as the smallest bar 
  
  
    int i = 0; 
    while (i < n) 
    { 

        if (s.empty() || hist[s.top()] <= hist[i]) 
            s.push(i++); 

        else
        { 
            tp = s.top();  // store the top index 
            s.pop();  // pop the top 
  
   
            area_with_top = hist[tp] * (s.empty() ? i :  
                                   i - s.top() - 1); 
  
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    } 
  

    while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        area_with_top = hist[tp] * (s.empty() ? i :  
                                i - s.top() - 1); 
  
        if (max_area < area_with_top) 
            max_area = area_with_top; 
    } 
  
    return max_area; 
} 
  
// Driver program to test above function 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n;
        cin>>n;
        unsigned long long int hist[n];
        for(int i =0;i<n;i++){
            cin>>hist[i];
        }
      
    cout <<getMax(hist, n)<<endl; 
    }
   
    return 0; 
}