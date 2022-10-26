package programmers;
import java.util.*;
public class Rank {
    public List<Integer> solution(int[][] score) {
        List<Integer> answer = new ArrayList<>();
        Map<Double, Integer> map = new HashMap<>();
        List<Double> avg = new ArrayList<>();
        List<Double> tmp = new ArrayList<>();
        for(int i = 0; i < score.length; i++){
            avg.add((double)(score[i][0]+score[i][1]) / 2);
            tmp.add((double)(score[i][0]+score[i][1]) / 2);
        }
        Collections.sort(avg);
        Collections.reverse(avg);
        int rank = 1;
        for(int i = 0; i < avg.size(); i++){
            if(map.get(avg.get(i)) == null){
                map.put(avg.get(i),rank);
            }
            rank++;
        }
        for(double i : tmp){
            answer.add(map.get(i));
        }

        return answer;
    }
}
