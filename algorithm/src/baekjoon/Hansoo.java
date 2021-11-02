package baekjoon;
import java.util.*;
public class Hansoo {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int num = s.nextInt();
		int count = 0;
		if(num >1000) {
			while(num <=100)
				num = s.nextInt();
		}
		for(int i = 1; i<=num; i++) {
			if(i<100) {
				count++;  
			}
			else if(((i/100)-((i%100)/10)) == (((i%100)/10) -(i%100)%10))
			{
				count++;
			}
		}
		System.out.print(count);
	}
}