package programmers;

public class Discount {
	public int solution(int price) {
        return (int) ((price >= 500000 ? price * 80 : price >= 300000 ? price * 90 : price >= 100000 ? price * 95 : price*100) / 100);
    }
}
