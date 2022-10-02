package programmers;

public class HideSum {
	public int solution(String my_string) {
        int answer = 0;
        for(char c : my_string.toCharArray()) {
        	if(0 <= c-'0' && c-'0' <= 9) {
        		answer += c-'0';
        	}
        }
        
        return answer;
    }
}
