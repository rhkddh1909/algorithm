package programmers;

import java.util.Arrays;

public class TriangleYn {
	public int solution(int[] sides) {
        int answer = 0;
        
        Arrays.sort(sides);
        
        answer = sides[2] < (sides[1] + sides[0]) ? 1 : 2;
        
        return answer;
    }
}
