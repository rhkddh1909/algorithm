package baekjoon;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class MazeCreate {
	static int[][] maze;
	static int[][] dp;
	static int n;
	static Queue<Pair> queue = new LinkedList<Pair>();
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st = new StringTokenizer(br.readLine());
        
		n = Integer.parseInt(st.nextToken());
		maze = new int[n][n];
		dp = new int[n][n];
		
		for(int i = 0; i < n; i++) {
			String tmp = br.readLine();
			for(int j = 0; j < n; j++) {
				maze[i][j] = Character.getNumericValue(tmp.charAt(j));
				dp[i][j] = n*n;
			}
		}
		
		bfs();
		
		System.out.println(dp[n-1][n-1]);
		
	}
	
	public static void bfs() {
		queue.add(new Pair(0,0,0));
		while(!queue.isEmpty()) {
			Pair pos = queue.poll();
			if(pos.getX() < n-1 && dp[pos.getY()][pos.getX()+1] > pos.getBrk()) {
				dp[pos.getY()][pos.getX()+1]  = maze[pos.getY()][pos.getX()+1] == 1 ? pos.getBrk() : pos.getBrk()+1;
				queue.add(new Pair(pos.getX()+1, pos.getY(), maze[pos.getY()][pos.getX()+1] == 1 ? pos.getBrk() : pos.getBrk()+1));
			}
			if(pos.getY() < n-1 && dp[pos.getY()+1][pos.getX()] > pos.getBrk() ) {
				dp[pos.getY()+1][pos.getX()] = maze[pos.getY()+1][pos.getX()] == 1 ? pos.getBrk() : pos.getBrk()+1;
				queue.add(new Pair(pos.getX(), pos.getY()+1, maze[pos.getY()+1][pos.getX()] == 1 ? pos.getBrk() : pos.getBrk()+1));
			}
			if(pos.getX() > 0 && dp[pos.getY()][pos.getX()-1] > pos.getBrk()) {
				dp[pos.getY()][pos.getX()-1] = maze[pos.getY()][pos.getX()-1] == 1 ? pos.getBrk() : pos.getBrk()+1;
				queue.add(new Pair(pos.getX()-1, pos.getY(), maze[pos.getY()][pos.getX()-1] == 1 ? pos.getBrk() : pos.getBrk()+1));
			}
			if(pos.getY() > 0 && dp[pos.getY()-1][pos.getX()] > pos.getBrk()) {
				dp[pos.getY()-1][pos.getX()] = maze[pos.getY()-1][pos.getX()] == 1 ? pos.getBrk() : pos.getBrk()+1;
				queue.add(new Pair(pos.getX(), pos.getY()-1, maze[pos.getY()-1][pos.getX()] == 1 ? pos.getBrk() : pos.getBrk()+1));
			}
		}
	}
	
	static class Pair{
		private int x;
		private int y;
		private int brk;
		public Pair(int x,int y, int brk) {
			this.x = x;
			this.y = y;
			this.brk = brk;
		}
		
		public int getX() {
			return this.x;
		}
		public int getY() {
			return this.y;
		}
		public int getBrk() {
			return this.brk;
		}
	}
}
