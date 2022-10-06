package baekjoon;

import java.util.Scanner;

public class MuscleLoss {
	static int n;
	static int k;
	static int[] arrInt;
	static boolean[] visit;
	static int cnt = 0;

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		n = scan.nextInt();
		k = scan.nextInt();

		arrInt = new int[n];
		visit = new boolean[n];
		for (int i = 0; i < arrInt.length; i++) {
			arrInt[i] = scan.nextInt();
		}

		dfs(0, 500);

		System.out.println(cnt);
	}

	public static void dfs(int day, int maxMucle) {
		if (day == n) {
			cnt++;
			return;
		}
		for (int i = 0; i < arrInt.length; i++) {
			if (!visit[i]) {
				visit[i] = true;
				if(maxMucle - k + arrInt[i] >= 500) {
					dfs(day + 1, maxMucle - k + arrInt[i]);
				}
				visit[i] = false;
			}
		}
	}
}
