// https://projecteuler.net/problem=3
// Problem: The prime factors of 13195 are 5, 7, 13 and 29. What is the largest prime factor of the number 600851475143?
// Solution : check if the number is divisible by any prime number less than or equal to its square root.

class Main {
    public static void main(String[] args) {
        long number = 600851475143L;
        int largestPrime = 0;
        for(int i=2; i<=number; i++){
            while(number%i ==0){
                largestPrime = i;
                number = number / i;
            }
        }
        System.out.println("Largest Prime: "+ largestPrime);
    }
}
