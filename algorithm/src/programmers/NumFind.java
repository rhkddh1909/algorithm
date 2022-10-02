package programmers;

public class NumFind {
	public int solution(int num, int k) {
		String numStr = num + "";
		char[] chArr = numStr.toCharArray();
		
		for(int i = 0; i < chArr.length; i++) {
			if(k == chArr[i]-'0') {
				return i+1;
			}
		}
		
		return -1;
		
	}
}
