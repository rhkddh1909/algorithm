package programmers;

public class NumRecover {
	public int solution(String s) {
        int answer = 0;
        String[] numStr = {"zero","one","two","three","four","five","six","seven","eight","nine"};
        
        for(int i = 0; i < 10; i++) {
        	s = s.replace(numStr[i], new Integer(i).toString());
        }

        answer = Integer.parseInt(s);
        
        return answer;
    }
}
