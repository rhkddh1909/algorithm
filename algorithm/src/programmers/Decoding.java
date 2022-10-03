package programmers;

public class Decoding {
	public String solution(String cipher, int code) {
        String answer = "";
        char[] chArr = cipher.toCharArray();
        for(int i = code-1; i < chArr.length; i = i+code) {
        	answer += chArr[i];
        }
        
        return answer;
    }
}
