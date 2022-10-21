package programmers;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class SecretMap {
    public List<String> solution(int n, int[] arr1, int[] arr2) {
        List<List<String>> list1 = Arrays.stream(arr1).mapToObj(item -> Arrays.stream(String.format("%0"+n+"d",Long.parseLong(Long.toString(item,2))).split(""))
                .collect(Collectors.toList()))
                .collect(Collectors.toList());

        List<List<String>> list2 = Arrays.stream(arr2).mapToObj(item -> Arrays.stream(String.format("%0"+n+"d",Long.parseLong(Long.toString(item,2))).split(""))
                .collect(Collectors.toList()))
                .collect(Collectors.toList());
        System.out.println(list1);
        System.out.println(list2);
        List<String> answer = IntStream.range(0,n).mapToObj(idx -> String.join("",IntStream.range(0,n)
                        .mapToObj(elem->list1.get(idx).get(elem).equals("1")||list2.get(idx).get(elem).equals("1") ? "#" : " ")
                .collect(Collectors.toList())))
                .collect(Collectors.toList());

        return answer;
    }
}
