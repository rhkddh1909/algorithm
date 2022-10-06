package programmers;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class Emergency {
	public int[] solution(int[] emergency) {
        int[] answer = new int[emergency.length];
        int[] tmp = new int[emergency.length];
        
        for(int i = 0; i < emergency.length; i++) {
        	tmp[i] = emergency[i];
        }
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        
        Arrays.sort(emergency);
        
        
        for(int i = emergency.length-1; i >= 0; i--) {
        	map.put(emergency[i], i);
        }
        
        for(int i = 0;  i < tmp.length; i++) {
        	answer[i] = map.get(tmp[i])+1;
        }
        
        return answer;
    }
}
