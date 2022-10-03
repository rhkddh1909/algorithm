package programmers;

import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class MorseCode {
	public String solution(String letter) {
        String answer = "";
        
        Map<String, String> morse = new HashMap<String, String>(){{ 
        	    put(".-","a");
        	    put("-...","b");
        	    put("-.-.","c");
        	    put("-..","d");
        	    put(".","e");
        	    put("..-.","f");
        	    put("--.","g");
        	    put("....","h");
        	    put("..","i");
        	    put(".---","j");
        	    put("-.-","k");
        	    put(".-..","l");
        	    put("--","m");
        	    put("-.","n");
        	    put("---","o");
        	    put(".--.","p");
        	    put("--.-","q");
        	    put(".-.","r");
        	    put("...","s");
        	    put("-","t");
        	    put("..-","u");
        	    put("...-","v");
        	    put(".--","w");
        	    put("-..-","x");
        	    put("-.--","y");
        	    put("--..","z");
    	}};
    	
    	StringTokenizer stk = new StringTokenizer(letter);
    	
    	while(stk.hasMoreTokens()) {
    		answer += morse.get(stk.nextToken());
    	}
        
        return answer.toLowerCase();
    }
}
