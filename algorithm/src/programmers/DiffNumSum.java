package programmers;

import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class DiffNumSum {
    public List<Integer> solution(int[] numbers) {


        List<Integer> list = IntStream.range(0,numbers.length)
                .flatMap(idx->IntStream.range(0,numbers.length)
                        .filter(idx2->idx != idx2)
                        .map(idx2->numbers[idx]+numbers[idx2]))
                .distinct()
                .sorted()
                .boxed()
                .collect(Collectors.toList());

        return list;
    }
}
