package programmers;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class StringSort {
	public List<Integer> solution(String my_string) {
		List<Integer> ansList = new ArrayList<Integer>();
		for(char c : my_string.toCharArray()) {
			if(0 <= c-'0' && c-'0' <=9) {
				ansList.add(c-'0');
			}
		}
		
		Collections.sort(ansList);
		
		return ansList;
    }
}
