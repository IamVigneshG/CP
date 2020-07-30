#include <iostream>
#include<math.h>
using namespace std;



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
int cases;
cin>> cases;
long value;
while(cases--){
    cin >> value;
    long i=1;
    long ans=0;
    while(i<=value){
           i=i*2;
        if((value/i)>=(i/2)){
            ans=value-(value/i);
            }
        else{
             ans=(value-(value/2))+1;
        }

           
    }

    cout<<ans<<"\n";
}

}


   
