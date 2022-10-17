package programmers;

import java.util.Arrays;
import java.util.stream.IntStream;

public class SafeZone {
    @FunctionalInterface
    interface BiConsumer<T> {
        void apply(Integer t1, Integer t2);
    }
    public int solution(int[][] board) {
        int answer;
        int[] move = {-1,0,1};
        int[][] chkBoard = new int[board.length][board.length];

        BiConsumer<Integer> drawChk = (x, y) ->{
            Arrays.stream(move)
                    .filter((i)-> 0<= x+i && x+i < board.length)
                    .forEach(i->Arrays.stream(move)
                            .filter(j-> 0 <= j+y && j+y < board.length)
                            .forEach((j)->chkBoard[x+i][y+j] = 1));
        };

        IntStream.range(0, board.length).forEach(i -> IntStream.range(0, board.length).filter(j->board[i][j] == 1).forEach(j->drawChk.apply(i,j)));

        answer = (int)Arrays.stream(chkBoard).mapToLong(i -> Arrays.stream(i).filter(j -> j == 0).count()).sum();

        System.out.println();

        return answer;
    }
}

