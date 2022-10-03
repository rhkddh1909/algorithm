package programmers;

import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class ControlZ {
	public int solution(String s) {
        int answer = 0;
        List<String> list = new ArrayList<String>();
        StringTokenizer tk = new StringTokenizer(s);
        
        while(tk.hasMoreTokens()) {
        	list.add(tk.nextToken());
        }
        List<Integer> preNum = new ArrayList<Integer>();
        for(int i = 0; i < list.size(); i++) {
        	if(!list.get(i).equals("Z")) {
        		answer += Integer.parseInt(list.get(i));
        		preNum.add(Integer.parseInt(list.get(i)));
        	}
        	else {
        		answer -= preNum.get(preNum.size()-1);
        		preNum.remove(preNum.size()-1);
        	}
        }
        
        return answer;
    }
}
