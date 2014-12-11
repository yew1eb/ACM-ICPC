import java.io.BufferedInputStream;
import java.math.BigInteger;
import java.util.Scanner;


public class Solution {

	public static void main(String[] args) {
		//Scanner cin = new Scanner(System.in);
		Scanner cin = new Scanner(new BufferedInputStream(System.in));
		BigInteger x = cin.nextBigInteger();
		BigInteger l = BigInteger.ZERO;
		BigInteger r = x.add(BigInteger.ONE);
		BigInteger mid;
		while(l.add(BigInteger.ONE).compareTo(r)<0){
			mid = l.add(r).shiftRight(1);
			if(mid.multiply(mid).compareTo(x)>0){
				r = mid;
			}else {
				l = mid;
			}
		}
		System.out.println(l);
	}

}
