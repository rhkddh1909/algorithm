package programmers;

public class ExclusiveAEIOU {
	public String solution(String my_string) {
        String answer = "";
		String str = "aeiou";
        for(char c : my_string.toCharArray()) {
        	if(!str.contains(c+"")) {
        		answer += c;
        	}
        }
        return answer;
    }
}
