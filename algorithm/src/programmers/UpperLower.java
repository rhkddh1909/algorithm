package programmers;

public class UpperLower {
	public String solution(String my_string) {
        String answer = "";
        
        for(char c : my_string.toCharArray()) {
        	answer += (c+"").toLowerCase().equals(c+"") ? (c+"").toUpperCase() :(c+"").toLowerCase(); 
        }
        
        return answer;
    }
}
