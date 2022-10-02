package programmers;

import java.util.ArrayList;
import java.util.List;

public class NMulti {
	public List<Integer> solution(int n, int[] numlist) {
        List<Integer> answer = new ArrayList<Integer>();
        
        for(int i : numlist) {
        	if(i % n == 0 && i != 0) {
        		answer.add(i);
        	}
        }
        
        return answer;
    }
}
