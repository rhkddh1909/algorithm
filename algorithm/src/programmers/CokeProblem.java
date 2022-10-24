package programmers;

public class CokeProblem {
    public int solution(int a, int b, int n) {
        int answer = 0;
        int coke = n;
        while(coke/a != 0){
            answer += (coke/a) * b;
            coke = (coke/a) * b + coke %a;
        }

        return answer;
    }
}
