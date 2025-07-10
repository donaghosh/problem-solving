import java.util.*;
class Main {
    public static void main(String[] args) {
        String str = "abahsjskd";
        Map<Character, Integer> map= new HashMap<>();
        for(int i=0; i< str.length(); i++){
            if (map.get(str.charAt(i)) != null){
                Integer val = map.get(str.charAt(i));
                map.put(str.charAt(i), val+1);
            }else{
                map.put(str.charAt(i), 1);
            }
        }
        for (Character key : map.keySet()) {
            if (map.get(key) > 1){
                 System.out.println(key);
            }
        }
    }
