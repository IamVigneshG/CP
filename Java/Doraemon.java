import java.util.* ;
import java.io.* ;

// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/doraemon-loves-doracakes/

 
 
class Solution {
 
	public static void main( String args[] ) throws IOException {
 
       Scanner s = new Scanner(System.in);
        int numberofCases = Integer.parseInt(s.nextLine()); 
       for(int k=0;k<numberofCases;k++)
       {
       
 
        int length = Integer.parseInt(s.nextLine());
       ArrayList<Integer> doraemon = new ArrayList<Integer>(); // Create an ArrayList object
       ArrayList<Integer> cakeList = new ArrayList<Integer>(); // Create an ArrayList object
       int doreArray[]=new int[length];
       String input = s.nextLine();
       int maxTime=Integer.parseInt(s.nextLine());
       for (int i = 0; i <length; i++) { 
        if(input.charAt(i)=='P'){
            doraemon.add(i);
            doreArray[i]=1;
        }
        else if(input.charAt(i)=='*'){
           cakeList.add(i);
        }
        } 
        int isPossible=1;
        for (int i = 0; i <cakeList.size(); i++) {
            int cakeIndex= cakeList.get(i);
            int d=0;
            for(int j=cakeIndex-maxTime;  j<=(cakeIndex+maxTime); j++) {
                if(j>=0&&j<length&&doreArray[j]==1)
                {
                    if(j==doraemon.get(0))
                    {
                        doreArray[j]=0;
                        doreArray[cakeIndex]=1;
                    }
                    d++;
                    break;
                }
            }
           
            if(d==0)
            {
                isPossible=0;
                System.out.println("NO");
                break;
            }
            
        }
        
        if(isPossible==1)
        {
            System.out.println("YES");
        }
       }
}
    
   
}