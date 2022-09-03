package programmers;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;

public class DeclarationRslt {
	public List<Integer> solution(String[] id_list, String[] report, int k) {
	
		List<Integer> answer = new ArrayList<Integer>(); 
		Map<String, Integer> countMap = new HashMap<String, Integer>();
		Map<String, List<String>> reportMap = new HashMap<String, List<String>>();

		for(String temp : id_list) {
			countMap.put(temp,0);
			reportMap.put(temp, new ArrayList<String>());
		}
		
		for(String temp : report) {
			StringTokenizer stk = new StringTokenizer(temp);
			
			while(stk.hasMoreTokens()){
				String user1 = stk.nextToken();
				String user2 = stk.nextToken();
				
				if(!reportMap.get(user2).contains(user1)) {
					reportMap.get(user2).add(user1);
				}
			}
		}
		
		for(String tempStr : id_list) {
			if(reportMap.get(tempStr).size() >= k) {
				for(String user : reportMap.get(tempStr)) {
					countMap.put(user,countMap.get(user).intValue()+1);
				}
			}
		}
		
		for(String tempStr : id_list) {
			answer.add(countMap.get(tempStr));
		}
		
		return answer;
	}
}
