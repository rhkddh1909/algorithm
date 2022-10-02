package programmers;

import java.util.Arrays;

public class MaxVal2 {
	public int solution(int[] numbers) {
        int answer = 0;
        
        Arrays.sort(numbers);
        
        return numbers[0]*numbers[1] > numbers[numbers.length-1]*numbers[numbers.length-2] ? numbers[0]*numbers[1] : numbers[numbers.length-1]*numbers[numbers.length-2]; 
    }
}
