int Solution::maxSubArray(const vector<int> &A) {

    //initialise variables
    int sum = 0, max = 0, min, flag = 0, j = 0;
       
    for(int i = 0; i < A.size(); i++){
        sum = sum + A[i];
        if(sum < 0){
            sum = 0;
        }
        if(sum > max){
            max = sum;
        }
        if(A[i] < 0){
            j++;
            if(j == 1){
                min = A[i];
            }
            if(A[i] > min){
                min = A[i];
            }
            flag++;
        }
    }
    
    if(flag == A.size()){
        max = min; 
    }
    
    return max;
}
