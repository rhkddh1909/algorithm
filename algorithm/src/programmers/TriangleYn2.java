package programmers;
import java.util.*;
public class TriangleYn2 {
    public int solution(int[] sides) {
        int answer = 0;
        Arrays.sort(sides);
        answer = sides[0] + sides[1] - (sides[1] - sides[0]) -1;

        return answer;
    }
}
