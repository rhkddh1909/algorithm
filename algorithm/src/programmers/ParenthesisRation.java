package programmers;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class ParenthesisRation {
    public int solution(String s) {
        int answer = 0;

        if(s.replace("{","").length() != s.replace("}","").length()){
            return 0;
        }
        if(s.replace("[","").length() != s.replace("]","").length()){
            return 0;
        }
        if(s.replace("(","").length() != s.replace(")","").length()){
            return 0;
        }
        for(int i =0; i < s.length(); i++){
            List<String> tmpList = Arrays.stream(s.split("")).collect(Collectors.toList());
            Collections.rotate(tmpList,s.length() - i);
            String tmpS = tmpList.stream().collect(Collectors.joining());
            if(checkStr(tmpS)){
                answer++;
            }
        }

        return answer;
    }
    public boolean checkStr(String param){
        String tmpStr = param;
        if(tmpStr.replace("{}","").length() != tmpStr.length()){
            tmpStr = tmpStr.replace("{}","");
        }
        if(tmpStr.replace("[]","").length() != tmpStr.length()){
            tmpStr = tmpStr.replace("[]","");
        }
        if(tmpStr.replace("()","").length() != tmpStr.length()){
            tmpStr = tmpStr.replace("()","");
        }
        if(param.length() != tmpStr.length()){
            return checkStr(tmpStr);
        }
        else{
            return tmpStr.length() == 0 ? true : false;
        }
    }
}
