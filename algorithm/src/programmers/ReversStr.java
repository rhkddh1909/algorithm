package programmers;

public class ReversStr {
	public String solution(String my_string) {
        String answerStr = "";
        for(int i = my_string.length()-1; i >= 0; i--) {
        	answerStr += my_string.charAt(i);
        }
        
        return answerStr;
    }
}
