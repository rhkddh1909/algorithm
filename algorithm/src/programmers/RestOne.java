package programmers;

import java.util.stream.IntStream;

public class RestOne {
    public int solution(int n) {
        return IntStream.range(1,n).filter(num -> n%num == 1).findFirst().getAsInt();
    }
}
