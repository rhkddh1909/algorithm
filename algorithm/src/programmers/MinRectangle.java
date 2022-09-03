package programmers;

import java.util.Arrays;

public class MinRectangle {
	public int solution(int[][] sizes) {
		int answer = 0;

		int maxH = 0;
		int maxW = 0;
		for (int[] intArr : sizes) {
			Arrays.sort(intArr);

			maxH = maxH <= intArr[0] ? intArr[0] : maxH;
			maxW = maxW <= intArr[1] ? intArr[1] : maxW;
		}

		answer = maxH * maxW;

		return answer;
	}
}
