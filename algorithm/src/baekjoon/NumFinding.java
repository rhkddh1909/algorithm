package baekjoon;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

class NumFinding {
	public static void main(String args[]) {
		List<Integer> ans = new ArrayList<Integer>();
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		
		int[] arrInt = new int[a];
		
		for (int i = 0; i < a; i++) {
			int scani = scan.nextInt();
			arrInt[i] = scani;
		}
		
		Arrays.sort(arrInt);
		
		int b = scan.nextInt();
		
		for (int i = 0; i < b; i++) {
			int tmpInt = scan.nextInt();
			int start = 0;
			int end = arrInt.length-1;
			int mid = arrInt.length-1;
			while(start <= end) {
				mid = start + (end-start)/2;
				if(arrInt[mid] == tmpInt) {
					ans.add(1);
					break;
				}
				else if(arrInt[mid] < tmpInt) {
					if(start != mid) {
						start = mid;
					}
					else {
						for(int j = start; j <= end; j++) {
							if(arrInt[j] == tmpInt) {
								ans.add(1);
								break;
							}
							if(j == end) {
								ans.add(0);
							}
						}
						break;
					}
				}
				else if(arrInt[mid] > tmpInt) {
					if(end != mid) {
						end = mid;
					}
					else {
						for(int j = start; j <= end; j++) {
							if(arrInt[j] == tmpInt) {
								ans.add(1);
								break;
							}
							if(j == end) {
								ans.add(0);
							}
						}
						break;
					}
				}
			}
		}

		for (int tmp : ans) {
			System.out.println(tmp);
		}
	}
}
