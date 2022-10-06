package programmers;

import java.util.ArrayList;
import java.util.List;

public class PrimeFactor {
	public List<Integer> solution(int n) {
        List<Integer> list = new ArrayList<Integer>();
        for(int i = 2; i <= n; i++) {
        	if(n%i == 0) {
        		if(list.size() != 0) {
        			for(int j = 0; j < list.size(); j++) {
            			if(i%list.get(j)==0) {
            				break;
            			}
            			else if(j == list.size()-1) {
            				list.add(i);
            			}
            		}
        		}
        		else {
        			list.add(i);
        		}
        	}
        }
        
        if(list.size() == 0) {
			list.add(n);
		}

        return list;
    }
}
