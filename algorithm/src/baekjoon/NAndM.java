package baekjoon;

import java.util.Scanner;

public class NAndM {
	static int[] listInt;
	static boolean[] listBool;
	static int a;
	static int b;
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		a = scan.nextInt();
		b = scan.nextInt();
		listInt = new int[a+1];
		listBool = new boolean[a+1];
		backTracking(0,1);
	}
	public static void backTracking(int idx, int c) {
		if(idx == b) {
			for(int i = 0; i < b; i++) {
				System.out.print(listInt[i]+" ");
			}
			System.out.println();
			return;
		}
		for(int i = c; i <= a; i++) {
			if(!listBool[i]) {
				listInt[idx] = i;
				listBool[i] = true;
				backTracking(idx+1,i);
				listBool[i] = false;
			}
		}
	}
}
