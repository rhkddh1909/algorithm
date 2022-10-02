package programmers;

import java.util.ArrayList;
import java.util.List;

public class SubArr {
	public List<Integer> solution(int[] numbers, int num1, int num2) {
		List<Integer> list = new ArrayList<Integer>();
		for(int i = num1; i<= num2; i++) {
        	list.add(numbers[i]);
        }
        return list;
    }
}
