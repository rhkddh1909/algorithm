package programmers;

public class BinaryTran {
    public int[] solution(String s) {
        int[] answer = {0,0};
        while(!s.equals("1")){
            answer[1] += s.length() - s.replace("0","").length();
            s = Integer.toString(s.replace("0","").length(),2);
            answer[0]++;
        }
        return answer;
    }
}
