package programmers;

public class Game369 {
	public int solution(int order) {
        int answer = 0;
        String numStr = order+"";
        String str369 = "369";
        for(char c : numStr.toCharArray()) {
        	if(str369.contains(c+"")) {
        		answer++;
        	}
        }
        
        return answer;
    }
}
