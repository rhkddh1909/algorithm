package programmers;

public class SheepMeat {
	public int solution(int n, int k) {
        k = k - (n/10);
		return (n*12000) + (k*2000);
    }
}
