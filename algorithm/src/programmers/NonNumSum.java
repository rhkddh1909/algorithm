package programmers;

import java.util.Arrays;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class NonNumSum {
    public int solution(int[] numbers) {
        return IntStream.range(0,10)
                .filter(num->!(Arrays.stream(numbers)
                        .boxed()
                        .collect(Collectors.toList())
                        .contains(num)))
                .sum();
    }
}
