package programmers;

import java.util.Arrays;

public class AilianDic {
	public int solution(String[] spell, String[] dic) {
        int answer = 0;
        String sortStr = "";
        Arrays.sort(spell);
        
        for(String s : spell) {
        	sortStr += s;
        }
        
        for(int i = 0; i < dic.length; i++) {
        	char[] tmpChar = dic[i].toCharArray();
        	Arrays.sort(tmpChar);
        	
        	if(sortStr.equals(new String(tmpChar))) {
        		return 1;
        	}
        }
        
        return 2;
    }
}
