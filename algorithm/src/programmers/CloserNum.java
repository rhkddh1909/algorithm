package programmers;

import java.util.Arrays;

public class CloserNum {
	public int solution(int[] array, int n) {
        int answer = 0;
        Arrays.sort(array);
        
        for(int i = 0; i < array.length; i++) {
        	if(n < array[i]) {
        		if(i == 0) {
        			return array[i];
        		}
        		else if(n-array[i-1] == array[i]-n){
        			return array[i-1];
        		}
        		else {
        			return n-array[i-1] > array[i]-n ? array[i] : array[i-1];
        		}
        		
        	}
        }
        return array[array.length-1];
    }
}
