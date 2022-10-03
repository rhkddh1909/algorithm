package programmers;

import java.util.StringTokenizer;

public class HideSum2 {
	public int solution(String my_string) {
        int answer = 0;
        char[] chArr = my_string.toCharArray();
        for(char c : chArr) {
        	if(!(0 <= c-'0' && c-'0' <= 9)) {
        		my_string = my_string.replace(c+"", " ");
        	}
        }
        
        StringTokenizer stk = new StringTokenizer(my_string);
        
        while(stk.hasMoreTokens()) {
        	answer += Integer.parseInt(stk.nextToken());
        }
        
        return answer;
    }
}
