import java.util.* ;
import java.io.* ;
import java.lang.Math; 

// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/submissions/
class Solution {

	public static void main( String args[] ) throws IOException {

		System.setIn( new FileInputStream( new File("input.txt") ) ) ;
		System.setOut( new PrintStream( new File("output.txt") ) ) ;
       
       
       
        Scanner s = new Scanner(System.in);
        int length = Integer.parseInt(s.nextLine());
        if(length>=1 && length<=Math.pow(10,5)){
         String number= s.nextLine();
         String[] numarr = number.trim().split("\\s+");
          
            long[] sumarr = new long[length];
        if(Integer.valueOf(numarr[0])>=Math.pow(-10,7) && Integer.valueOf(numarr[0])<=Math.pow(10, 7)){ 
            sumarr[0]=Integer.valueOf(numarr[0]);
        }
        else{
            System.out.println("Element legnth constraint");
            System.exit(0);
        }
        
        for ( int j=1;j<length;j++){

                long value = Integer.valueOf(numarr[j]);
                if(value>=Math.pow(-10,7) && value<=Math.pow(10, 7)){
                    sumarr[j]=value+sumarr[j-1];
                }
                else{
                    System.out.println("Element legnth constraint");
                    System.exit(0);
                }
                
        }
        long bestSum=-10000000;
        for(int i = 0;i<length;i++){  
            long sum=0;
            int index = i;
            int originalIndex = i;
            for(int k=2;index<length;k++){
                    if(index+k<length){
                     index=index+k;
                    }
                    else{
                        break;
                    }
            }
            if(originalIndex>=1){
             sum=sumarr[index]-sumarr[originalIndex-1];
            }else{
                sum=sumarr[index];
            }
             bestSum=sum>bestSum?sum:bestSum;
        }
        System.out.println(bestSum);
    }
    else{
        System.err.println("ARRAY LIMIT CONSTRAINT ERROR");
    }
}
    
   
}

