package programmers;

public class ArrAvg {
	public double solution(int[] numbers) {
        double answer = 0.0;
        
        for(int i : numbers) {
        	answer += (double)i;
        }
        
        return answer/(double)numbers.length;
    }
}
