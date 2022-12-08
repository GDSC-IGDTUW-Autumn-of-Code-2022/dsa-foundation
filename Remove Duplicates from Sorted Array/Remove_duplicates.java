import java.util.Scanner;

public class Remove_duplicates {
    public static int removeDuplicates(int[] nums) {
        if(nums.length==0){
                return 0;
            }
        int j=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
    public static int[] takeinput(int n){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter elements of array");
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        sc.close();
        removeDuplicates(arr);
        return arr;
    }
    
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter number of elements");
        int n=sc.nextInt();
        int nums[]=takeinput(n);
        int m=removeDuplicates(nums);
        System.out.println("Modified array");
        for (int i = 0; i < m; i++)
            System.out.print(nums[i] + " ");
        sc.close();
    }    
}
