package programmers;

public class Lottos {
	public int[] solution(int[] lottos, int[] win_nums) {
		int[] answer = new int[2];

		int unKnown = 0;
		int same = 0;
		int max = 0;
		int min = 0;

		for (int temp : lottos) {
			if (temp == 0) {
				unKnown++;
			} else {
				for (int tempwin : win_nums) {
					if (temp == tempwin) {
						same++;
						break;
					}
				}
			}
		}
		if (same == 6) {
			max = 1;
			min = 1;
		} else if (unKnown == 6) {
			max = 1;
			min = 6;
		} else if ((unKnown + same) <= 1) {
			max = 6;
			min = 6;
		} else {
			max = 7 - (unKnown + same);
			min = 7 - (same);
		}

		answer[0] = max;
		answer[1] = min;

		return answer;
	}
}
