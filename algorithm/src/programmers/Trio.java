package programmers;

import java.util.stream.IntStream;

public class Trio {
    public int solution(int[] number) {
        return IntStream.range(0,number.length)
                .flatMap(idx1 ->IntStream.range(idx1+1,number.length)
                        .flatMap(idx2->IntStream.range(idx2+1,number.length)
                                .map(item->number[idx1]+number[idx2]+number[item]==0 ? 1 : 0)))
                .sum();
    }
}
