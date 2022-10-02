package coderPad;
import java.util.*;

public class CodePad134 {
	public static void main(String args[]) {
		MakeSpareArr spArr = new MakeSpareArr();
		
		int[] arr = {1,0,0,0,0,0,0,0,0,0,0,0,23,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,1235,8,8,0,0,};
		
		spArr.init(arr, arr.length);
		
		spArr.set(1,123123);
		spArr.set(0,123123);
		spArr.set(2,123123);
		
		for(int i =0; i < arr.length; i++) {
			System.out.println(spArr.get(i));
		}
		
		System.out.println(spArr.getSize());
		
	}
	
}

class MakeSpareArr{
	private Map<Integer,Integer> intMap;
	private int size;
	
	public MakeSpareArr() {
		this.intMap = new HashMap<Integer, Integer>();
		this.size = 0;
	}
	
	public void init(int[] arr, int size){
		for(int i = 0; i < size; i++ ) {
			if(arr[i] != 0) {
				this.size++;
				intMap.put(i,arr[i]);
			}
		}
	}
	public void set(int i, int val) {
		intMap.put(i, val);
	}
	public int get(int i) {
		if(this.intMap.get(i) == null) {
			return 0;
		}
		else {
			return intMap.get(i);
		}
	}
	
	public int getSize() {
		return this.size;
	}
}
