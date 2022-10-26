package programmers;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class DartGame {
    public int solution(String dartResult) {
        int answer = 0;
        String[] strArr = {"","",""};
        String[] intStr = {"","",""};

        int idx = -1;
        for(int i =0 ; i< dartResult.length(); i++){
            if(0 <= dartResult.charAt(i)-'0' && dartResult.charAt(i)-'0' <= 9){
                idx++;
                if((i != 0 && 0 <= dartResult.charAt(i-1)-'0' && dartResult.charAt(i-1)-'0' <= 9)) {
                    idx--;
                }
                intStr[idx] += dartResult.charAt(i)+"";
            }
            else{
                if((dartResult.charAt(i)+"").equals("*") && idx > 0){
                    strArr[idx-1] += "*";
                    strArr[idx] += "*";
                }
                else {
                    strArr[idx] += dartResult.charAt(i) + "";
                }
            }
        }

        List<Integer> listInt = Arrays.stream(intStr)
                .mapToInt(item->Integer.parseInt(item))
                .boxed()
                .collect(Collectors.toList());

        for(int i = 0; i < listInt.size(); i++){

            for (int j =0; j < strArr[i].length(); j++){
                int num = listInt.get(i);
                if(strArr[i].charAt(j) == 'S'){
                    listInt.set(i, num);
                }
                if(strArr[i].charAt(j) == 'D'){
                    listInt.set(i, num*num);
                }
                if(strArr[i].charAt(j) == 'T'){
                    listInt.set(i, num*num*num);
                }
                if(strArr[i].charAt(j) == '*'){
                    listInt.set(i, num*2);
                }
                if(strArr[i].charAt(j) == '#'){
                    listInt.set(i, num*-1);
                }
            }
        }

        return listInt.stream().mapToInt(item->item).sum();
    }
}
