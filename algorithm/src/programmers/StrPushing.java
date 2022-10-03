package programmers;

public class StrPushing {
	public int solution(String A, String B) {
		if(A.equals(B)) {
			return 0;
		}
				
		for(int i = 0; i < A.length()*2; i++) {
        	A = A.substring(A.length()-1,A.length()) + A.substring(0,A.length()-1); 
        	System.out.println(A+", "+B);
        	if(A.equals(B)) {
        		return i+1;
        	}
        }
        
        return -1;
    }
}
