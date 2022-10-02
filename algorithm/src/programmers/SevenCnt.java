package programmers;

public class SevenCnt {
	public int solution(int[] array) {
        String tmpStr = "";
		for(int i = 0; i < array.length; i++) {
        	tmpStr += array[i]+"";
        }
        return tmpStr.length() - tmpStr.replace("7","").length();
    }
}
