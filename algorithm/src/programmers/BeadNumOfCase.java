package programmers;

import java.math.BigInteger;

public class BeadNumOfCase {
	public BigInteger solution(int balls, int share) {
		BigInteger m = new BigInteger("1");
		BigInteger n = new BigInteger("1");
		BigInteger select = new BigInteger((balls-share > share ? balls-share : share)+"");
        BigInteger select2 = new BigInteger((balls-share > share ? share : balls-share)+"");
        
        
        for(BigInteger i = select.add(BigInteger.ONE); i.compareTo(new BigInteger(balls+"")) <= 0; i = i.add(BigInteger.ONE)) {
			n = n.multiply(i);
		}
        
        for(BigInteger i = BigInteger.ONE; i.compareTo(select2) <= 0; i = i.add(BigInteger.ONE)) {
        	m = m.multiply(i);
		}
        
        return n.divide(m);
    }
}
