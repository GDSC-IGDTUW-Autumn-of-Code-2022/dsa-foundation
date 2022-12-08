import java.util.*;
public class Median_code {
	public static int median(int[] arr){
		int len = arr.length;
		if (len % 2 == 0){
			int z = len / 2;
			int e = arr[z];
			int q = arr[z - 1];
			int ans = (e + q) / 2;
			return ans;
		}
		else{
			int z = Math.round(len / 2);
			return arr[z];
		}
	}
	public static void main(String[] args){
		
		int[] arr1 = { -3, 4, 12, 16, 6 };
		int[] arr2 = { -4, -1, -11, -6, 12, 7 };

		int n = arr1.length;
		int m = arr2.length;

		int[] arr3 = new int[n+m];
		System.arraycopy(arr1, 0, arr3, 0, n);
		System.arraycopy(arr2, 0, arr3, n, m);
        Arrays.sort(arr3);

		System.out.print("Median = " + median(arr3));
	}
}

