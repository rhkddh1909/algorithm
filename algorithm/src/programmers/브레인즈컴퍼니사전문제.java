import java.util.List;
import java.util.ArrayList;
class Solution {
    public int[] solution(int[][] v) {
        int[] answer = new int[2];
        List<Integer> xList = new ArrayList<Integer>();
        List<Integer> yList = new ArrayList<Integer>();
        for(int i = 0; i < 3; i++){
            xList.add(v[i][0]);
            yList.add(v[i][1]);
        }
        answer[0] = checkXy(xList);
        answer[1] = checkXy(yList);

        return answer;
    }

    private int checkXy(List<Integer> list){
        int idx0 = list.get(0);
        int idx1 = list.get(1);
        int idx2 = list.get(2);
        if(idx0 == idx1){
            return idx2;
        }
        else if(idx1 == idx2){
            return idx0;
        }
        else{
            return idx1;
        }
    }
}
