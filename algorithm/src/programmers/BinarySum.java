package programmers;

public class BinarySum {
	public String solution(String bin1, String bin2) {
        String answer = "";
        int n = 1;
        int one = 0;
        int two = 0;
        char[] oneArr = bin1.toCharArray();
        char[] twoArr = bin2.toCharArray();
        for(int i = bin1.length()-1; i >= 0; i-- ) {
        	one += (oneArr[i]-'0')  * n;
        	n *= 2;
        }
        n = 1;
        for(int j = bin2.length()-1; j >= 0; j-- ) {
        	two += (twoArr[j]-'0') * n;
        	n *= 2;
        }
        
        return Integer.toBinaryString(two+one);
    }
}
