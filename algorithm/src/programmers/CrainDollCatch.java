package programmers;

import java.util.*;

public class CrainDollCatch {
    public int solution(int[][] board, int[] moves) {
        int answer = 0;
        List<Queue<Integer>> box = new ArrayList<Queue<Integer>>();
        Stack<Integer> bowl = new Stack<>();
        for(int i =0; i< board[0].length; i++){
            box.add(new LinkedList<Integer>());
        }

        for(int i =0; i< board.length; i++){
            for(int j =0; j< board.length; j++){
                if(board[i][j] != 0){
                    box.get(j).add(board[i][j]);
                }
            }
        }
        for(int i : moves){
            if((!box.get(i-1).isEmpty()) && (!bowl.empty()) && (bowl.peek() == box.get(i-1).peek())) {
                answer += 2;
                bowl.pop();
            }
            else {
                bowl.push(box.get(i-1).peek());
            }
            if(!box.get(i-1).isEmpty()){
                box.get(i-1).remove();
            }
        }

        return answer;
    }

}
