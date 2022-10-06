package baekjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Star {
	static int n;
	public static void main(String args[]) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		n = Integer.parseInt(st.nextToken());
		
		printStar(0,0,1);
	}
	
	public static void printStar(int x, int y , int clear) {
		String str ="";
		if(x%3 == 1 && y%3 == 1) {
			System.out.print(" ");
			str = " ";
		}
		else {
			for(int i = 3; i <= n/3; i = i*3) {
				if(x/i%3 == 1 && y/i%3 == 1) {
					System.out.print(" ");
					str = " ";
				}
				if(str.equals(" ")) {
					break;
				}
			}
		}
		
		if(str.equals("")) {
			System.out.print("*");
		}
		
		if(n*n == clear) {
			return;
		}
		else if(clear%n == 0) {
			System.out.println();
			printStar((x+1),0,clear+1);
		}
		else{
			printStar(x,(y+1),clear+1);
		}
		
	}
}
