#include <iostream>
using namespace std;

// https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/birthday-party-12/
int main()
{
cin.tie(0);
ios_base::sync_with_stdio(0);
 
int t;
cin>>t;                            // Reading input from STDIN
while(t--)
{
    int p;
    cin>>p;
    int c;
    cin>>c;
    if(c%p==0)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
}
}