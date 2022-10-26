package programmers;

import java.util.stream.IntStream;

public class AliquotPlusMinus {
    public int solution(int left, int right) {
        return IntStream.rangeClosed(left,right).map(elem -> IntStream.rangeClosed(1,elem).filter(item->elem%item==0).map(num -> 1).sum()%2==0 ? elem : elem*-1).sum();
    }
}
