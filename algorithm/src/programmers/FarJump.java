package programmers;

public class FarJump {
    public long solution(int n) {
        long[] dp =  new long[n+1];
        dp[0] = 0;
        dp[1] = 1;
        if(n > 1){
            dp[2] = 2;
        }

        for(int i =3; i<=n; i++){
            dp[i] = (dp[i-1]+dp[i-2])%1234567;
        }

        return dp[n];
    }
}
