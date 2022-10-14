package programmers;

import java.util.*;

public class OXQuiz {
    public List<String> solution(String[] quiz) {
        List<String> answer = new ArrayList<>();
        for(String str : quiz){
            str = str.replace("=", "");
            StringTokenizer st = new StringTokenizer(str);
            int a = Integer.parseInt(st.nextToken());
            String operator = st.nextToken();
            int b =Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            answer.add(c == (operator.equals("+") ? a+b : operator.equals("-") ? a-b : operator.equals("/") ? a/b : a*b) ? "O" : "X");

        }
        return answer;
    }
}
