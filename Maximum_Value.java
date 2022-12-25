public class Maximum_Value {
    public static void main(String[] args) {
        String[] str = { "1", "01", "001", "0001" };
        int res = MaxValue(str);
        System.out.println(res);

    }

    public static int MaxValue(String[] strs) {
        int str = 0;

        for (int i = 0; i < strs.length; i++) {
            String s = strs[i];
            char[] chr = s.toCharArray();
            int countDigit = 0;
            int countString = 0;
            int convert = 0;
            int sum = 0;
            int max = 0;
            for (int j = 0; j < chr.length; j++) {
                if (Character.isDigit(chr[j])) {
                    countDigit++;
                } else {
                    countString++;
                }

            }
            if (countDigit == chr.length) {
                convert = Integer.parseInt(s);

            } else {
                sum = countDigit + countString;
            }
            max = Math.max(sum, convert);
            str = Math.max(str, max);

        }
        return str;
    }

}
