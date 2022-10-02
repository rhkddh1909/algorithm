package programmers;

public class PointPosition {
	public int solution(int[] dot) {
		return dot[1] > 0 ? dot[0] > 0 ? 1 : 2 : dot[0] > 0 ? 4 : 3;
    }
}
