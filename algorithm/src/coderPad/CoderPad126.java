package coderPad;
import java.util.List;
public class CoderPad126 {
	public List<Integer>Solution(int k, List<Integer> arr){
		for(int i = 0; i < k; i++) {
			arr.add(arr.get(0));
			arr.remove(0);
		}
		
		return arr;
	}
}
