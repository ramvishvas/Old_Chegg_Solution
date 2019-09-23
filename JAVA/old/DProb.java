import static java.lang.Math.pow;
import static java.lang.Math.exp;
// Discrete Probability Library
public class DProb{
	public static double Permutations(long N, long X){
		double perm = 1.0;
		if (X == 0) {
			return 1.0;
		}
		for (long i = 0; i < X ;i++ ) {
			perm = perm*(double)(N-i);
		}
		return perm;
	}
	public static double Combinations(long N, long X){
		double comb = 1.0;
		// C(N, X) is same as C(N, N-X)

		if (X == 0 || X == N) {
			return 1.0;
		}else if (X == 1) {
			return (double)N;
		}
		long x = X > N-X ? N-X : X; // x = min(N, N-X)
		for (long i = 0; i < x ;i++ ) {
			comb = comb*(double)(N-i) / (double)(i+1);
		}
		return comb;
	}

	public static double HyperGeometric(long Np, long Xp, long N, long X){
		// Total population,              N=Np
		// Number of successes in N,      K=Xp
		// Sample size,                   n=N
		// Number of successes in sample, k=X

		double probX = 0.0;
		probX = Combinations(Xp, X) * (Combinations(Np-Xp, N-X) / Combinations(Np, N));
		return probX;
	}

	public static double Binomial(double P, long N, long X){
		double probX = 0.0;
		probX = Combinations(N,X)*pow(P, (double)X)*pow((1-P), (double)(N-X));
		return probX;
	}

	public static double Poisson(double Xmean, long X){
		double probX = 1.0;
		for (long i = 1; i <= X ;i++ ) {
			probX = probX * (Xmean / (double)i);
		}
		probX = probX / exp(Xmean);
		return probX;
	}

	public static void main(String[] args) {
		System.out.println(Permutations(10, 0));
		System.out.println(Permutations(10, 10));
		System.out.println(Permutations(10, 1));
		System.out.println(Permutations(10, 3));
		System.out.println(Permutations(14, 7)+"\n");

		System.out.println(Combinations(10, 0));
		System.out.println(Combinations(10, 10));
		System.out.println(Combinations(10, 1));
		System.out.println(Combinations(10, 3));
		System.out.println(Combinations(10, 7)+"\n");

		
		System.out.println(HyperGeometric(6,3,2,0));
		System.out.println(HyperGeometric(100,35,10,6)+"\n");

		System.out.println(Binomial(0.5,10,6)+"\n");

		System.out.println(Poisson(3, 5)+"\n");
	}

} // end class