package programmers;

import java.util.Arrays;

public class LowerStrSort {
	public String solution(String my_string) {
        String lower = my_string.toLowerCase();
        char[] chArr = lower.toCharArray();
        String answer = "";
        Arrays.sort(chArr);
        for(char c : chArr) {
        	answer += c;
        }
        
        return answer;
    }
}
