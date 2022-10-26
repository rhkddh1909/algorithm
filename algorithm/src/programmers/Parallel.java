package programmers;

import java.util.List;
import java.util.Optional;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class Parallel {
    public int solution(int[][] dots) {
        int answer = 0;

        List<List<Double>> list = IntStream.range(0,dots.length)
                .asDoubleStream()
                .mapToObj(item->IntStream.range((int)item+1,dots.length)
                        .mapToDouble(idx -> (dots[(int)item][0]-dots[idx][0])!=0 ? ((double)Math.max(dots[(int)item][1],(double)dots[idx][1])-(double)Math.min(dots[(int)item][1],(double)dots[idx][1]))/((double)Math.max(dots[(int)item][0],(double)dots[idx][0])-(double)Math.min(dots[(int)item][0],(double)dots[idx][0])) : 999)
                        .boxed()
                        .collect(Collectors.toList()))
                .collect(Collectors.toList());

        if(Optional.ofNullable(list.get(0).get(0)).equals(Optional.ofNullable(list.get(2).get(0)))){
            answer = 1;
        }
        if(Optional.ofNullable(list.get(0).get(1)).equals(Optional.ofNullable(list.get(1).get(1)))){
            answer = 1;
        }
        if(Optional.ofNullable(list.get(0).get(2)).equals(Optional.ofNullable(list.get(1).get(0)))) {
            answer = 1;
        }

        return answer;
    }
}
