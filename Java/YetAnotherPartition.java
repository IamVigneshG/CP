import java.util.* ;
import java.io.* ;

// https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/yet-another-partition-problem/submissions/
class Solution {
   static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
	public static void main( String args[] ) throws IOException {



    


        FastReader in=new FastReader(); 
        int cases =in.nextInt();
        for(int i=0;i<cases;i++){
            int count = in.nextInt();
           
            Long[] num=new Long[count];
            long ans=0;
            long x=0;
            for(int j=0;j<count;j++){
               num[j]=in.nextLong();
                x^=num[j];      
            }
            ans=x;
            long grp=0;
            long max=0;
            for(int k=0;k<count;k++){
                grp^=num[k];
                max=grp&(grp^x);
                if(max>ans){
                    ans=max;
                }

            }
            System.out.println(ans);
        }
 
    }
}