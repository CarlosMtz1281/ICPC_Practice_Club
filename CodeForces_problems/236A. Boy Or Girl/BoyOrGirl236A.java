import java.util.*;
import java.io.*;

public class BoyOrGirl236A {
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
        String user = reader.nextLine();

        char[] userChar = user.toCharArray();
        char[] distinct = new char[user.length()];

        boolean flag = true;
        int count = 0;
        int chars = 0;

        for(char i : userChar){
            flag = true;
            for(char j : distinct){
                if(j == i){
                    flag = false;
                }
            }
            if(flag){
                distinct[count] = i;
                count++;
            }
        }

        for(char k : distinct){
            if(k == '\0'){
                break;
            }
            chars++;
        }

        if(chars%2 == 0){
            System.out.println("CHAT WITH HER!");
        } else{
            System.out.println("IGNORE HIM!");
        }
    }
}