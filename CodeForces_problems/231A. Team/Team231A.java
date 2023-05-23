import java.util.*;
import java.io.*;

public class Team231A {
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

        int problems = reader.nextInt();
        int counter = 0;
        int sure = 0;
        String x = "";

        for(int i = 0; i < problems; i++){
            x = reader.nextLine();
            sure = 0;

            String[] parts = x.split(" ");

            for(int j=0; j<3; j++){
                if(Integer.parseInt(parts[j])==1){
                    sure++;
                }
            }

            if(sure>=2){
                counter++;
            }
        }

        System.out.println(counter);
    }
}