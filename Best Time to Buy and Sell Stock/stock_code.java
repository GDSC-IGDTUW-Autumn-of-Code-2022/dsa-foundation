import java.util.Scanner;

public class stock_code {
    public static int[] takeInput(int n){
        Scanner sc= new Scanner(System.in);
        int arr[]= new int [n];
        System.out.println("Enter elemnts of array");
        for (int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        sc.close();
        return arr;
    }

    public static int maxProfit(int[] prices) {
        int maximum=0;
        int min=prices[0];
        int n= prices.length;
        for(int i=0;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            if(maximum<prices[i]-min){
                maximum=prices[i]-min;
            }
        }
        return maximum;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Number of elements in an array");
        int n=sc.nextInt();
        int [] array=takeInput(n);
        System.out.println(maxProfit(array));
        sc.close();
    }
}


