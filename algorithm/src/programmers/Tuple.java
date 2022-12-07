package programmers;

import java.util.*;

public class Tuple {
    public int[] solution(String s) {
        int[] answer = {};
        s = s.replace("{","");
        s = s.replace("}","");

        String[] strArr = s.split(",");

        Map<String, Integer> tuples = new HashMap<>();

        Arrays.stream(strArr).distinct().forEach(item->tuples.put(item,0));

        Arrays.stream(strArr).forEach(item -> tuples.put(item,tuples.get(item)+1));

        answer = tuples.entrySet().stream()
                .sorted(Map.Entry.comparingByValue(Comparator.reverseOrder()))
                .mapToInt(item-> Integer.parseInt(item.getKey()))
                .toArray();

        return answer;
    }
}
