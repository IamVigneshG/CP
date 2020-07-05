import java.util.* ;
import java.io.* ;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;


// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/description/
public class Solution {

    public static void main( String args[] ) throws IOException {


        Scanner sc = new Scanner(System.in);
        String outputString = new String();
        String string = sc.nextLine();
        int length = string.length();
        if (length <= 100) {
            for (int i = 0; i < length; i++) {
                int character = (int)string.charAt(i);
                if (character >= 65 && character <= 90) {
                    int newChar = character + 32;
                    char output = (char)newChar;
                    outputString = outputString + output;
                } else {
                    int newChar = character - 32;
                    char output = (char) newChar;
                    outputString = outputString + output;
                }
            }
            System.out.println(outputString);
        } else {
            System.out.println("Input limit exceeds");
        }

    }


}

