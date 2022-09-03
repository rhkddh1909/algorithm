package programmers;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class MbtiTest {
	public String solution(String[] survey, int[] choice) {
		Map<String, Integer> map = new HashMap<String, Integer>();
		String[] strArr = {"RT","CF","JM","AN"};
		String answer = "";
		
		for(String temp : strArr) {
			map.put(temp.charAt(0)+"", 0);
			map.put(temp.charAt(1)+"", 0);
		}
		
		for(int i = 0; i < survey.length; i++) {
			int score = choice[i]-4;
			String tmp1 = survey[i].charAt(0)+"";
			String tmp2 = survey[i].charAt(1)+"";
			
			if(score < 0) {
				map.put(tmp1,map.get(tmp1).intValue() + (score*-1));
			}
			else if(score > 0){
				map.put(tmp2,map.get(tmp2).intValue() + (score));
			}
		}
		
		for(String temp : strArr) {
			String sortTemp = strSort(temp);
			String tmp1 = sortTemp.charAt(0)+"";
			String tmp2 = sortTemp.charAt(1)+"";
			
			answer += map.get(tmp1).intValue() >= map.get(tmp2).intValue() ? tmp1 : tmp2;
		}
		
		return answer;
	}
	
	public String strSort(String str) {
		char[] charArr = str.toCharArray();
		Arrays.sort(charArr);
		String temp = new String(charArr);
		
		return temp;
	}
}
