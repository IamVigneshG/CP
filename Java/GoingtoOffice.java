import java.util.* ;
import java.io.* ;

// https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/description/
class Solution {

	public static void main( String args[] ) throws IOException {

		System.setIn( new FileInputStream( new File("input.txt") ) ) ;
		System.setOut( new PrintStream( new File("output.txt") ) ) ;

        Scanner s = new Scanner(System.in);


        long distance = Long.valueOf(s.nextLine()); 
        String[] onlineCab = s.nextLine().split(" ");
        String[] classicCab = s.nextLine().split(" ");
        s.close();
        String minimum=(Long.valueOf(onlineCab[0])+(distance-Long.valueOf(onlineCab[1]))*Long.valueOf(onlineCab[2]))<=(((distance/Long.valueOf(classicCab[0]))*Long.valueOf(classicCab[2]))+Long.valueOf(classicCab[1])+distance*Long.valueOf(classicCab[3])) ? "Online Taxi" :"Classic Taxi";
        System.out.println(minimum);
    }
    
    
   
}

