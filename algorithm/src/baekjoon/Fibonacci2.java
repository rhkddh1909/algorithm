package baekjoon;
import java.util.*;
public class Fibonacci2 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int num = s.nextInt();
		long[] pibo;
		if(num <0 && num >90 ) {
			while(num<0&&num>90) {
				num = s.nextInt();
			}
		}
		pibo = new long[(int) (num+1)];
		pibo[0] = 0;
		pibo[1] = 1;
		for(int i = 2; i <= num; i++) {
			pibo[i] = pibo[i-1]+pibo[i-2];
		}
		System.out.print(pibo[num]);
	}
}
