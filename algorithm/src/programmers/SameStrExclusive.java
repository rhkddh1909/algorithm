package programmers;

public class SameStrExclusive {
	public String solution(String my_string) {
        String answer = "";
        String exStr = "";
        
        for(char c : my_string.toCharArray()) {
        	if(!exStr.contains(c+"")) {
        		exStr += c;
        		answer += c;
        	}
        }
        
        return answer;
    }
}
