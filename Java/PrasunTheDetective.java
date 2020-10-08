import java.util.*; 


// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/prasun-the-detective-77f90f8f/submissions/
class Solution  
{  
public static void main(String[] args)  
{  
String result="YES";
Scanner sc= new Scanner(System.in); //System.in is a standard input stream  
char[] a=sc.nextLine().toCharArray();
char[] b=sc.nextLine().toCharArray();
int length=a.length;
int length1=b.length;
outerloop:
for(int i=0;i<=length1-1;i++){
    for(int j=0;j<=length-1;j++){
        // System.out.println("checking "+b[i]+" with "+a[j]);
        if(b[i]==' '){
            break;
        }
        else if(Character.toLowerCase(b[i])==Character.toLowerCase(a[j])){
            a[j]='~';
            // System.out.println(a);
            break;
        }
        else if(j==length-1){
            // System.out.println("inside no");
            result="NO";
            break outerloop;
        }
    }
}
System.out.println(result);
}  
}  