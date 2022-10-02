package programmers;

public class TwoD {
	public int[][] solution(int[] num_list, int n) {
        int col = num_list.length/n;
        int row = n;
		int[][] answer = new int[col][row];
		
		for(int i = 0; i < col; i++) {
			for(int j = 0; j < row; j++) {
				answer[i][j] = num_list[(i*n)+j];
			}
		}
		
        return answer;
    }
}
