package programmers;

import java.util.ArrayList;
import java.util.List;

public class Denomirator {
	public List<Integer> solution(int n) {
        List<Integer> list = new ArrayList<Integer>();
        
        for(int i = 1; i <= n; i++) {
        	if(n%i == 0) {
        		list.add(i);
        	}
        }
        
        return list;
    }
}
