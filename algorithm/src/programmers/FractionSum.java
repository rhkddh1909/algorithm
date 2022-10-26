package programmers;

import java.util.*;

public class FractionSum {
    public List<Integer> solution(int denum1, int num1, int denum2, int num2) {
        List<Integer> answer = new ArrayList<>();
        int sumDenum = denum1*num2 + denum2*num1;
        int sumNum = num1 * num2;

        int idx = sumNum > sumDenum ? sumNum : sumDenum;
        int i = 2;
        while(i <= idx){
            if(sumDenum%i == 0 && sumNum%i ==0){
                sumDenum = sumDenum/i;
                sumNum = sumNum/i;
            }
            else {
                i++;
            }
        }
        answer.add(sumDenum);
        answer.add(sumNum);

        return answer;
    }
}
