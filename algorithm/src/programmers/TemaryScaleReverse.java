package programmers;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class TemaryScaleReverse {
    public int solution(int n) {
        int answer = 0;


        List<String> list = Arrays.stream(Integer.toString(n,3).split("")).collect(Collectors.toList());
        Collections.reverse(list);
        return Integer.parseInt(String.join("",list),3);
    }
}
