package programmers;

import java.util.Arrays;

public class MakingAtoB {
	public int solution(String before, String after) {
        char[] a = before.toCharArray();
        char[] b = after.toCharArray();
		Arrays.sort(a);
        Arrays.sort(b);
        
        return new String(a).equals(new String(b)) ? 1 :0;
    }
}
