package programmers;

import java.util.Arrays;

public class MiddleVal {
	public int solution(int[] array) {
		Arrays.sort(array);
		return array[(array.length/2)];
	}
}
