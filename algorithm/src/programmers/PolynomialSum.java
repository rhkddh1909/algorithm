package programmers;

import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class PolynomialSum {
    public String solution(String polynomial) {
        List<String> list = new ArrayList<String>();
        polynomial = polynomial.replace("+","");
        StringTokenizer st = new StringTokenizer(polynomial);

        while(st.hasMoreTokens()){
            list.add(st.nextToken());
        }
        int xVal = 0;
        int nVal = 0;
        xVal = list
                .stream()
                .filter(i->i.length() !=  i.replace("x","").length())
                .mapToInt(i->Integer.parseInt(i.replace("x","").isEmpty() ?  "1" :  i.replace("x","")))
                .sum();
        nVal = list
                .stream()
                .filter(i->i.length() ==  i.replace("x","").length())
                .mapToInt(i->Integer.parseInt(i))
                .sum();
        String xStr = xVal == 1 ? "x" : xVal == 0 ? "" : xVal+"x";
        String nStr = nVal == 0 ? "" : nVal+"";

        return !xStr.isEmpty() && !nStr.isEmpty() ? xStr + " + "+ nStr : xStr.isEmpty() ? nStr : xStr;
    }
}
