package programmers;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;

public class OnceStr {
	public String solution(String s) {
        String tmpStr = "";
        Map<String,Integer> map = new HashMap<String, Integer>();
        
        char[] chArr = s.toCharArray();
        
        for(char ch : chArr) {
        	if(map.get(ch+"") == null) {
        		map.put(ch+"", 1);
        	}
        	else {
        		map.put(ch+"", map.get(ch+"")+1);
        	}
        }
        
        for(Entry<String,Integer> e : map.entrySet()) {
        	if(e.getValue() == 1) {
        		tmpStr += e.getKey();
        	}
        }
        
        chArr = tmpStr.toCharArray();
        Arrays.sort(chArr);
        return new String(chArr);
    }
}
