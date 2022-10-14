package programmers;

import java.util.*;

public class ConnectArr {
    public List<Integer> solution(int num, int total) {
        List<Integer> answer = new ArrayList<>();
        int start = 1;
        int end = num;
        int sum = 0;
        for(int i = 1; i <= num; i++){
            sum += i;
        }

        while(sum != total){
            if(sum < total){
                end++;
                sum = sum -start + end;
                start++;
            }
            else if(sum > total){
                start--;
                sum = sum - end + start;
                end--;
            }
        }
        for(int i = start; i <= end; i++){
            answer.add(i);
        }
        return answer;
    }
}
