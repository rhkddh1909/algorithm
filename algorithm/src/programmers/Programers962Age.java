package programmers;

public class Programers962Age{
	public String solution(int age) {
        String ageStr = age+"";
		String[] arr = {"a","b","c","d","e","f","g","h","i","j","k"};
		String answer = "";
        for(char c : ageStr.toCharArray()) {
			answer += arr[c-'0'];
		}
		
        return answer;
    }
}
