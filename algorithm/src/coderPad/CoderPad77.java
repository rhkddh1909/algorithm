package coderPad;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class CoderPad77 {
	public static void main(String[] args) {
		int[][] arr = {{1,3},{5,8},{4,10},{10,25},{20,25},{22,27}, {26,29}, {30,41}};
		
		System.out.println(new Solution().solution(arr));
	}
}
class Solution{ 
	private int min;
	private int max;
	private int i;
	private int k;
	
	public List<ArrayList<Integer>> solution(int[][] arr) {
		List<Integer> list = new ArrayList<Integer>();
		List<ArrayList<Integer>> ansList = new ArrayList<ArrayList<Integer>>();
		Map<Integer,Integer> map = new HashMap<Integer, Integer>();
		for(i = 0; i < arr.length; i++) {
			if(map.get(arr[i][0]) != null) {
				if(map.get(arr[i][0]) < arr[i][1]) {
					map.put(arr[i][0], arr[i][1]);
				}
			}
			else {
				map.put(arr[i][0], arr[i][1]);
				list.add(arr[i][0]);
			}
		}
		
		
		Collections.sort(list);
		
		min = list.get(0);
		max = map.get(list.get(0));
		
		for(k = 1; k < list.size(); k++) {
			if(min <= list.get(k) && list.get(k) <= max) {
				if(max < map.get(list.get(k))) {
					max = map.get(list.get(k));
				}
			}
			else {
				ansList.add(new ArrayList<Integer>(){{
					add(min);
					add(max);
				}});
				min = list.get(k);
				max = map.get(list.get(k));
			}
		}
		
		ansList.add(new ArrayList<Integer>(){{
			add(min);
			add(max);
		}});
		
		return ansList;
	}
}