import java.util.*;

public class Subsequences{

    public static void subsequence(String str,int idx,String newString){
        if(idx==str.length()){
            System.out.println(newString);
            return;
        }
        char currchar=str.charAt(idx);

        // when we consider the currchar
        // We add adding 1st character in string
        subsequence(str, idx+1, newString+currchar);

        // when we did not consider the currchar
        // Not adding first character of the string
        // because the concept of subsequence either
        // character will present or not
        subsequence(str, idx+1, newString);
    }

    public static void main(String args[]){
        String str="abc";
        // Calling a function
        subsequence(str,0,"");
    }
}