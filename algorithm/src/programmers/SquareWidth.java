package programmers;
import java.lang.*;
public class SquareWidth {
    public int solution(int[][] dots) {
        int answer = 0;
        int h = 0;
        int w = 0;
        for(int i = 1; i < dots.length; i++){
            if(dots[0][0] - dots[i][0] != 0){
                w = Math.abs(dots[0][0] - dots[i][0]);
            }
            if(dots[0][0] - dots[i][0] != 0){
                h = Math.abs(dots[0][1] - dots[i][1]);
            }
            if(w != 0 && h != 0){
                break;
            }
        }

        return h*w;
    }
}
