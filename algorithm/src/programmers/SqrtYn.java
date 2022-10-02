package programmers;

public class SqrtYn {
	public int solution(int n) {
		double a = Math.sqrt((double)n);
		int b = (int) Math.sqrt(n);
		if(a*10 == b*10) {
			return 1;
		}
		else {
			return 2;
		}
	}
}
