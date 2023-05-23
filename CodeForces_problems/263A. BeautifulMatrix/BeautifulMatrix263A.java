import java.util.*;
import java.io.*;

public class BeautifulMatrix263A {
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

        String[][] matrix = new String[5][5];

        int x=0;
        int y=0;

        int count = 0;

        for(int i=0; i<5; i++){
            matrix[i] = reader.nextLine().split(" ");

            for(int j=0; j<5; j++){
                if(matrix[i][j].equals("1")){
                    x = i;
                    y = j;
                }
            }
        }

        while(true){
            if(x < 2){
                x++;
                count++;
            } else if(x > 2){
                x--; 
                count++;
            } else{
                break;
            }
        }

        while(true){
            if(y < 2){
                y++;
                count++;
            } else if(y > 2){
                y--; 
                count++;
            } else{
                break;
            }
        }
        
        System.out.println(count);
    }
}