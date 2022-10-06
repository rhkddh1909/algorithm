package programmers;

import java.util.StringTokenizer;

public class StringCarculator {
	public int solution(String my_string) {
        int answer = 0;
        
        StringTokenizer sk = new StringTokenizer(my_string);
        answer = Integer.parseInt(sk.nextToken());
        while(sk.hasMoreTokens()) {
        	String cal = sk.nextToken();
        	if(cal.equals("+")) {
        		answer += Integer.parseInt(sk.nextToken());
        	}
        	if(cal.equals("-")) {
        		answer -= Integer.parseInt(sk.nextToken());
        	}
        	if(cal.equals("*")) {
        		answer *= Integer.parseInt(sk.nextToken());
        	}
	        if(cal.equals("/")) {
	        	answer /= Integer.parseInt(sk.nextToken());
	    	}
        }
        return answer;
    }
}
