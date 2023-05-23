import java.util.*;
import java.io.*;

public class BurenkaPlaysWithFraction1720A {
    // For fast input output
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            try {
                br = new BufferedReader(
                        new FileReader("input.txt"));
                PrintStream out = new PrintStream(new FileOutputStream("output.txt"));
                System.setOut(out);
            } catch (Exception e) {
                br = new BufferedReader(new InputStreamReader(System.in));
            }
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    // end of fast i/o code
    public static void main(String[] args) {
        FastReader reader = new FastReader();
        int testCases = reader.nextInt();

        int num1, den1, num2, den2;
        String l;

        while(testCases > 0){
            testCases--;

            l = reader.nextLine();
            String[] ints = l.split(" ");

            num1 = Integer.parseInt(ints[0]);
            den1 = Integer.parseInt(ints[1]);
            num2 = Integer.parseInt(ints[2]);
            den2 = Integer.parseInt(ints[3]);

            if((long)num1*den2 == (long)num2*den1){
                System.out.println("0");
                continue;
            }

            if(num1 == 0 || num2 == 0){
                System.out.println("1");
                continue;
            }

            if((double)num1/den1 == (double)num2/den2){
                System.out.println("1");
                continue;
            }

            if(((long)num1*den2)%((long)num2*den1) == 0 || ((long)num2*den1)%((long)num1*den2) == 0){
                System.out.println("1");
            }else{
                System.out.println("2");
            }
        }
    }
}   