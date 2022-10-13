package programmers;

public class ChickenCoupon {
    public int solution(int chicken) {
        int answer = 0;
        int coupon = 0;
        for(int i = 0; i < chicken; i++) {
            answer++;
            coupon++;

            if (coupon % 10 == 0) {
                coupon = 1;
                answer++;
            }
        }

        return answer - chicken;
    }
}
