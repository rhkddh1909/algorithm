package programmers;

public class EachSum extends Divide1000 {
	public int solution(int n) {
        int answer = 0;
		String str = n+"";
        
		for(char c : str.toCharArray()) {
			answer += c-'0';
		}
		
        return answer;
    }
}
