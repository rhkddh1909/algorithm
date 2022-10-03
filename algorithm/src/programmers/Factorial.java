package programmers;

public class Factorial {
	public int solution(int n) {
        int answer = 0;
        int tmpNum = 1;
        for(int i = 1; i <= 10; i++) {
        	tmpNum *= i;
        	if(tmpNum == n) {
        		return i;
        	}
        	else if(tmpNum > n){
        		return i-1;
        	}
        }
        
        return answer;
    }
}
