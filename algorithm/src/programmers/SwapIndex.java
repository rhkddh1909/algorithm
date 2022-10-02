package programmers;

public class SwapIndex {
	public String solution(String my_string, int num1, int num2) {
        String answer = "";
        char[] chArr = my_string.toCharArray();
        for(int i = 0; i < chArr.length; i++) {
        	if(i == num1 || i == num2) {
        		answer += num1 == i ? chArr[num2] : chArr[num1];
        	}
        	else {
        		answer += chArr[i];
        	}
        }
        
        return answer;
    }
}
