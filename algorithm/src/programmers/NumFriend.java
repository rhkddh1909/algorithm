package programmers;

import java.util.ArrayList;
import java.util.List;

public class NumFriend {
    public String solution(String X, String Y) {
        String answer = "";

        List<StringBuilder> listX = new ArrayList<StringBuilder>();
        List<StringBuilder> listY = new ArrayList<StringBuilder>();
        for(int i = 0; i < 10; i++){
            listY.add(new StringBuilder(""));
            listX.add(new StringBuilder(""));
        }
        int maxlen = Math.max(Y.length(),X.length());
        for(int i =0; i < maxlen; i++){
            if(i < X.length()) {
                int num = X.charAt(i)-'0';
                listX.get(num).append(X.charAt(i));
            }
            if(i < Y.length()) {
                int num = Y.charAt(i)-'0';
                listY.get(num).append(Y.charAt(i));
            }
        }

        for(int i = 9; i >= 0; i--){
            if(listY.get(i).length() != 0 && listX.get(i).length() != 0){
                answer += listX.get(i).length() > listY.get(i).length() ? listY.get(i) : listX.get(i);
            }
        }

        return answer.isEmpty() ? "-1" : answer.charAt(0) == '0' ? "0" :answer;
    }
}
