#include<bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/tic-tac-toe-thingy-7ce8b17b/submissions/
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
char map[3][3];
char a;
int xCount=0;
int oCount=0;
int dotCount=0;
int won=-1;
for(int i=0; i<3; i++)
{
    for (int j=0; j<3; j++)
    {
        if(cin>>map[i][j] ) 
        {
            if(map[i][j]=='X'){
                xCount++;

              
            }
            else if(map[i][j]=='O'){
                oCount++;
        
            }
            else if (map[i][j]=='.'){
                dotCount++;
            }
            else{
            cout<<"Wait, what?";
            exit(0);
            return 0;
            }
         
        }
        else
        {
            cout<<"Wait, what?";
            break;
            return 0;
        }
    }
}
if(cin>>a || (oCount>xCount) || (xCount-oCount<0 && (xCount-oCount)*(-1)>=2)||(xCount-oCount>0 && (xCount-oCount)>=2) ){
    cout<<"Wait, what?";      
}
else if(dotCount==9){
    cout<<"X's turn.";
}
else if(((map[1][1]==map[0][0]&& map[0][0]==map[2][2])||
    (map[0][2]==map[1][1]&& map[1][1]==map[2][0])|| 
    (map[0][1]==map[1][1]&& map[1][1]==map[2][1])||
    (map[1][0]==map[1][1]&& map[1][1]==map[1][2]))&& map[1][1]!='.')
{
    map[1][1]=='X'?won=1:won=0;
}
else if((map[0][0]==map[0][1]&& map[0][1]==map[0][2]) && map[0][1]!='.')      
{
     map[0][1]=='X'?won=1:won=0;
}
else if((map[2][0]==map[2][1]&& map[2][1]==map[2][2]) && map[2][2]!='.')      
{
     map[2][1]=='X'?won=1:won=0;
}
else if((map[0][0]==map[1][0]&& map[1][0]==map[2][0]) && map[1][0]!='.')      
{
     map[1][0]=='X'?won=1:won=0;
}
else if((map[0][2]==map[1][2]&& map[1][2]==map[2][2]) && map[1][2]!='.')      
{
     map[1][2]=='X'?won=1:won=0;
}
else if ( (xCount+oCount) ==9 ){
    cout<<"It's a draw.";
}
else if(xCount!=0 || oCount!=0) {
    xCount>oCount?(cout<<"O's turn."):(cout<<"X's turn.");
}
if (won !=-1){
    if(won==1){
        xCount>oCount?(cout<<"X won."):(cout<<"Wait, what?");
    }
    else if(won==0){
        oCount==xCount?(cout<<"O won."):(cout<<"Wait, what?");
    }
}

}


   
