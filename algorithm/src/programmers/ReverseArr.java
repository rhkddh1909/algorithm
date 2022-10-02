package programmers;

import java.util.ArrayList;
import java.util.List;

public class ReverseArr {
	public List<Integer> solution(int[] num_list) {
        List<Integer> list = new ArrayList<Integer>();
        
        for(int i = num_list.length-1; i >= 0; i--) {
        	list.add(num_list[i]);
        }
        
        return list;
    }
}
