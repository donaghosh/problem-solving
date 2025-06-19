// Given an integer array nums, return an array answer such that answer[i] 
// is equal to the product of all the elements of nums except nums[i].

import java.util.*;

public class Main {
    
    public static int[] product(int[] nums){
      int n = nums.length;
      int[] answer = new int[n];
      answer[0]=1;
      for(int i= 1; i<n; i++){
        answer[i] = nums[i-1]*answer[i-1];
      }
      
      int R=1;
      for(int i=n-1; i>=0; i--){
        answer[i] = answer[i]*R;
        R *= nums[i];
      }
      
      return answer;
      
      
    }
    
    public static void main(String[] args) {
      int[] nums = {1,2,3,4};
      int[] result = product(nums);
      for(int i=0; i<result.length; i++){
      System.out.println(result[i]);
      }
      
  }
}
