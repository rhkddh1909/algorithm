package programmers;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;

public class Mode {
	public int solution(int[] array) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        int answer = 0;
        for(int i : array) {
        	if(map.get(i) == null) {
        		map.put(i, 1);
        	}
        	else {
        		map.put(i, map.get(i)+1);
        	}
        }
        
        
        List<Integer> list = new ArrayList<Integer>();
        for(Entry<Integer,Integer> tmp : map.entrySet()) {
        	list.add(tmp.getValue());
        }
        
        Collections.sort(list);
        int max = list.get(list.size()-1);
        int cnt = 0;
        for(Entry<Integer,Integer> tmp : map.entrySet()) {
        	if(tmp.getValue() == max) {
        		cnt++;
        		answer = tmp.getKey();
        	}
        	if(cnt > 1) {
        		return -1;
        	}
        }
        
        return answer;
    }
}
