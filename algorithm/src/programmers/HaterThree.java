package programmers;
import java.util.*;
public class HaterThree {
    int answer = 0;
    int n = 0;
    public int solution(int n) {
        this.n = n;
        this.count(1);
        return answer;
    }

    private int count(int num){
        answer++;
        if(answer%3 == 0 || (answer+"").length() != (answer+"").replace("3","").length()){
            return count(num);
        }
        else if(num != n){
            return count(num+1);
        }
        else{
            return answer;
        }
    }
}
