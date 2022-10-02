package programmers;

public class AntWar {
	public int solution(int hp) {
		int answer = 0;
		answer += hp/5;
		hp = hp%5;
		answer += hp/3;
		hp = hp%3;
		
		return answer + hp;
	}
}
