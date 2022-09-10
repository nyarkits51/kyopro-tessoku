// 以下のプログラムでは X[0]=0, X[N+1]=W を仮定している
dp[0] = 1;
for (int i = 1; i <= N + 1; i++) {
	for (int j = 0; j < i; j++) {
		// if 文の条件式は「足場 j から足場 i に直接ジャンプできるか」を判定する
		if (X[i] - R <= X[j] && X[j] <= X[i] - L) dp[i] += dp[j];
		dp[i] %= 1000000007;
	}
}

// 答えを出力
cout << dp[N + 1] << endl;