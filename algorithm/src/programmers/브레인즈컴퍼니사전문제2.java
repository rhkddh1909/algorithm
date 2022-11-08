import java.util.Scanner;
import java.util.stream.IntStream;
class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();

        IntStream.range(0,a).forEach(item->{
            IntStream.range(0,item+1).forEach((star)->System.out.print("*"));
            System.out.println();
        });
    }
}
