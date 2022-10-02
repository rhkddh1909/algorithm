package programmers;

import java.util.ArrayList;
import java.util.List;

public class ArrLen {
	public List<Integer> solution(String[] strlist) {
        List<Integer> answer = new ArrayList<Integer>();
        
        for(String str : strlist) {
        	answer.add(str.length());
        }
        
        return answer;
    }
}
