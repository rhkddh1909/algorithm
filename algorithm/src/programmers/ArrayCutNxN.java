package programmers;

import java.util.stream.LongStream;

public class ArrayCutNxN {
    public long[] solution(int n, long left, long right) {
        return LongStream.rangeClosed(left,right)
                .map(item-> Math.max((item/n)+1,(item%n)+1))
                .toArray();
    }
}
