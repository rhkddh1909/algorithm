package programmers;

import java.util.ArrayList;
import java.util.List;

public class ArrRotation {
	public List<Integer> solution(int[] numbers, String direction) {
        List<Integer> list = new ArrayList<Integer>();
		for(int i : numbers) {
        	list.add(i);
        }
		
		if(direction.equals("left")) {
			list.add(list.get(0));
			list.remove(0);
		}
		else {
			list.add(0, list.get(list.size()-1));
			list.remove(list.size()-1);
		}
		
        return list;
    }
}
