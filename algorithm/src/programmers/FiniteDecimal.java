package programmers;

import java.util.ArrayList;
import java.util.List;

public class FiniteDecimal {
	public int solution(int a, int b) {
        int answer = 1;
        int tmp = b;
        List<Integer> list = new ArrayList<Integer>();
        
        while(tmp%2 == 0) {
        	tmp = tmp/2;
        }
        
        while(tmp%5 == 0) {
        	tmp = tmp/5;
        }
        
        for(int i = 2; i <= tmp; i++) {
        	if(tmp % i == 0) {
        		list.add(i);
        	}
        }
        
        for(int i = 0; i < list.size(); i++) {
        	if(a % list.get(i) == 0 ) {
        		a = a/list.get(i);
        	}
        	else {
        		answer = 2;
        		break;
        	}
        }
        
        return answer;
    }
}
