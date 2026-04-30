//1 2 3 4 5
//11 12 13 14 15
//21 22 23 24 25
//16 17 18 19 20
//6 7 8 9 10

// 1 2 3 4
// 9 10 11 12
// 13 14 15 16
// 5 6 7 8

class Main {
    public static int[][] generatePattern(int n){
    int[][] matrix = new int[n][n];
    int num = 1;
    int top = 0;
    int bottom = n-1;
    while(top<=bottom){
        for(int i = 0; i<n; i++){
            matrix[top][i] = num++;
        }
        if(top != bottom){
            for(int col = 0; col<n; col++){
                matrix[bottom][col] = num++;
            }
        }
        top++;
        bottom--;
    }
    return matrix;
    
}
        
    public static void main(String[] args) {
        
    int n = 5;
    int[][] result = generatePattern(n) ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        System.out.print(result[i][j] + " ");
        }
        System.out.println("");
    }
    }
}
