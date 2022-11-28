package programmers;

import java.util.Arrays;

public class FoodFightMacth {
    public String foodFightMacth(int[] food) {
        String answer = "0";

        food = Arrays.stream(food).map(item -> item/2).toArray();

        for(int i = food.length-1; i > 0; i--){
            for(int j =0; j < food[i]; j++){
                answer = i+answer+i;
            }
        }

        return answer;
    }
}
