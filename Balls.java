import java.util.Scanner;
public class Balls {

    //using merge sort
    // time complexity for merge sort is : O(nlogn)
    public static void mergeSort(int[] input){
        merging(input,0,input.length-1);
    }
    public static void merging(int []input,int start,int end){
        if(start<end){
            int mid=(start+end)/2;
            merging(input,start,mid);
            merging(input,mid+1,end);
            merge(input,start,mid,end);
        }
    }
    public static void merge(int arr[], int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;

        int L[] = new int [n1];
        int R[] = new int [n2];

        for (int i=0; i<n1; ++i)
            L[i] = arr[l + i];
        for (int j=0; j<n2; ++j)
            R[j] = arr[m + 1+ j];


        int i = 0, j = 0;
        int k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }


    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        //take input for number of elements for array
        System.out.println("Enter total no. of balls in red balls' bag: ");
        int n=sc.nextInt();
        int arr[]= new int[n];

        // input array
        System.out.println("Enter the labels of the balls: ");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        //sort the array
        mergeSort(arr);

        // finding the missing and the repeating labels.
        int tmp1=0;
        int tmp2=0;
        for (int i=0;i<n;i++){
            if (arr[i]!=i+1){
                tmp1=i+1;
            }
            if (i<(n-1) && arr[i]==arr[i+1]){
                tmp2=arr[i];
            }
        }
        System.out.println("Missing = "+ tmp1);
        System.out.println("repeating = "+tmp2);

    }
}

// time complexity: O(n) because the for loops will run n times (n is size of array)
