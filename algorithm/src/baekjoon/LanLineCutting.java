package baekjoon;

import java.util.Scanner;

public class LanLineCutting {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		int k = scan.nextInt();
		long n = scan.nextInt();
		long max = 0;
		int min = 1;
		long lenSum = 0;
		int[] len = new int[k];
		for (int i = 0; i < k; i++) {
			len[i] = scan.nextInt();
			lenSum += len[i];
		}
		long end = lenSum / (n);
		long start = 1;
		long mid = ((end - start) / 2) == 0 ? 1 : ((end - start) / 2);
		while (true) {
			long rslt = 0;
			for (int i = 0; i < len.length; i++) {
				rslt += len[i] / mid;
			}

			if (rslt < n) {
				end = mid;
				if(mid <= start + (end - start) / 2) {
					for(long i = start; i <= end; i++) {
						rslt = 0;
						for (int j = 0; j < len.length; j++) {
							rslt += len[j] / i;
						}
						if(rslt >= n) {
							max = max > i ? max : i;
						}
						else {
							break;
						}
					}
					break;
				}
				else {
					end = mid;
					mid = start + (end - start) / 2;
				}

			} else {
				if(start >= start + (end - start) / 2) {
					for(long i = start; i <= end; i++) {
						rslt = 0;
						for (int j = 0; j < len.length; j++) {
							rslt += len[j] / i;
						}
						if(rslt >= n) {
							max = max > i ? max : i;
						}
						else {
							break;
						}
					}
					break;
				}
				else {
					start = mid == 0 ? 1 : mid;
					max = max > mid ? max : mid;
					mid = start + (end - start) / 2;
				}
			}
		}

		System.out.println(max);

	}
}
