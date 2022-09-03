package programmers;

public class KeyPadPush {
	public String solution(int[] numbers, String hand) {
        String answer = "";
        int right = 12;
        int left = 10;
        
        for(int num : numbers) {
        	if(num == 0) {
        		num = 11;
        	}
        	if(num == 3 || num == 6 || num == 9) {
        		answer += "R";
        		right = num;
        	}
        	else if(num == 1 || num == 4 || num == 7){
        		answer += "L";
        		left = num;
        	}
        	else {
        		int r = this.subValue(num, right);
        		int l = this.subValue(num, left);
        		int rdis = (r/3)+(r%3);
        		int ldis = (l/3)+(l%3);
        		if(hand.equals("left")) {
        			String ch = rdis >= ldis ? "L" : "R";
        			answer += ch;
        			if(ch.equals("R")) {
        				right = num;
        			}
        			else {
        				left = num;
        			}
        		}
        		else {
        			String ch = rdis <= ldis ? "R" : "L";
        			answer += ch;
        			if(ch.equals("R")) {
        				right = num;
        			}
        			else {
        				left = num;
        			}
        		}
        	}
        	
        }
        
        
        return answer;
    }
	
	private int subValue(int pushNum, int hand) {
		return pushNum > hand ? pushNum - hand : hand - pushNum;
	}
}
