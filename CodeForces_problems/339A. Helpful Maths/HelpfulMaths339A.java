import java.util.*;
import java.io.*;
import java.util.Arrays;

public class HelpfulMaths339A {
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

        String equation = reader.nextLine();

        String[] numbersString = equation.split("\\+");
        int[] numbers = new int[numbersString.length];

        for(int i=0; i<numbersString.length; i++){
            numbers[i] = Integer.parseInt(numbersString[i]);
        }

        Arrays.sort(numbers);

        System.out.print(numbers[0]);

        for(int j=1; j<numbersString.length; j++){
            System.out.print("+" + numbers[j]);
        }
    }
}