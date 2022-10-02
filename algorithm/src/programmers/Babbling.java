package programmers;

public class Babbling {
	public int solution(String[] babbling) {
		String[] strArr = { "aya", "ye", "woo", "ma" };
		int answer = 0;
		for (int j = 0; j < babbling.length; j++) {
			for (int i = 0; i < 4; i++) {
				if (babbling[j].contains(strArr[i] + strArr[i])) {
					babbling[j] = "-";
				}
				else {
					babbling[j] = babbling[j].replace(strArr[i], "");
				}
			}
		}
		
		for(String tmpStr : babbling) {
			if(tmpStr.equals("")) {
				answer++;
			}
		}
		
		return answer;
	}
}
