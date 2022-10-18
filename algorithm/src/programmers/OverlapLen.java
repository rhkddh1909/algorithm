package programmers;

import java.util.Arrays;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class OverlapLen {
    public int solution(int[][] lines) {
        int answer = 0;
        int max = 0;
        int min = 0;

        max = Arrays.stream(lines).flatMapToInt(item -> Arrays.stream(item)).max().getAsInt();
        min = Arrays.stream(lines).flatMapToInt(item -> Arrays.stream(item)).min().getAsInt();

        answer = (int)IntStream.range(min,max)
                .filter(item -> Arrays.stream(lines)
                        .mapToInt(arr -> (IntStream.range(Arrays.stream(arr).sorted().toArray()[0],Arrays.stream(arr).sorted().toArray()[1])
                                .boxed().collect(Collectors.toList())
                                .contains(item) ? 1 : 0))
                        .sum() >= 2)
                .count();

        return answer;
    }
}

