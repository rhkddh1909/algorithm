package programmers;

import java.util.Arrays;

public class MaxVal {
	public int solution(int[] numbers) {
        Arrays.sort(numbers);
        
        return numbers[numbers.length-1]*numbers[numbers.length-2];
    }
}
