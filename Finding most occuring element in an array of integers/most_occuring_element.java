import java.util.Scanner;

public class most_occuring_element {
    public static int mostFrequent(int[] arr, int n){
    int maxcount = 0;
    int element_having_max_freq = 0;
    for (int i = 0; i < n; i++) {
      int count = 0;
      for (int j = 0; j < n; j++) {
        if (arr[i] == arr[j]) {
          count++;
        }
      }
 
      if (count > maxcount) {
        maxcount = count;
        element_having_max_freq = arr[i];
      }
    }
    return element_having_max_freq;
  }

  public static int[] takeinput(int n){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter elements of array");
    int[] arr=new int[n];
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
    }
    sc.close();
    return arr;
  }

  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter number of elements");
    int n=sc.nextInt(); 
    int[] arr = takeinput(n);
    System.out.print("Most occuring element is= ");
    System.out.print(mostFrequent(arr, n));
    sc.close();
  }
}
 
