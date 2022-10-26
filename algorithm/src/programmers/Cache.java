package programmers;

import java.util.LinkedList;
import java.util.Locale;
import java.util.Queue;
import java.util.stream.Collectors;

public class Cache {
    public int solution(int cacheSize, String[] cities) {
        int answer = 0;
        Queue<String> cache = new LinkedList<String>();
        if(cacheSize == 0){
            return cities.length * 5;
        }
        for(String s : cities){
            s = s.toLowerCase(Locale.ROOT);
            if(cache.size() < cacheSize){
                if(cache.stream().map(str->str.toLowerCase(Locale.ROOT)).collect(Collectors.toList()).contains(s)){
                    answer++;
                    cache.remove(s);
                    cache.add(s);
                }
                else{
                    answer+= 5;
                    cache.add(s);
                }

            }
            else{
                if(cache.stream().map(str->str.toLowerCase(Locale.ROOT)).collect(Collectors.toList()).contains(s)){
                    answer++;
                    cache.remove(s);
                    cache.add(s);
                }
                else{
                    cache.remove();
                    cache.add(s);
                    answer += 5;
                }
            }
        }

        return answer;
    }
}
