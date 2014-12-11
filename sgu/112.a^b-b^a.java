import java.math.BigInteger;
import java.util.Scanner;


public class Solution {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		BigInteger a = cin.nextBigInteger();
		BigInteger b = cin.nextBigInteger();
		BigInteger t1 = a.pow(b.intValue());
		BigInteger t2 = b.pow(a.intValue());
		BigInteger ans = t1.subtract(t2);
		System.out.println(ans);
	}

}

