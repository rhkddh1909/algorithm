package programmers;

public class DividePizza {
	public int solution(int n) {
        for(int i = 1; i <= 15; i++) {
        	if((7*i)/n >= 1) {
        		return i;
        	}
        }
        
        return 0;
    }
}
