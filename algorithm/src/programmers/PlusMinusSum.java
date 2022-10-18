package programmers;

import java.util.stream.IntStream;

public class PlusMinusSum {
    public int solution(int[] absolutes, boolean[] signs) {
        return IntStream.range(0,absolutes.length)
                .map(num ->signs[num] ? absolutes[num] : absolutes[num]*-1)
                .sum();
    }
}
