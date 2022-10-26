package programmers;
import java.util.*;
import java.lang.*;
public class SpecificSort {
    public int[] solution(int[] numlist, int n) {
        List<Integer> list = new ArrayList<Integer>();
        for(int i = 0; i < numlist.length; i++){
            list.add(numlist[i]);
            numlist[i] = Math.abs(numlist[i] - n);
        }

        Arrays.sort(numlist);

        int prev = 0;

        for(int i = 0; i < numlist.length; i++){
            if(i != 0 && prev == numlist[i]){
                prev = numlist[i];
                numlist[i] = n - numlist[i];
            }
            else{
                prev = numlist[i];
                if(list.contains((n + numlist[i]))){
                    numlist[i] = n + numlist[i];
                }
                else{
                    numlist[i] = n - numlist[i];
                }

            }
        }

        return numlist;
    }
}
