//Ex.1) 세 정수 입력받아 최대값, 최솟값 출력.

int max_val (int i, int j, int k){
    int result;
    if(i>j){
        result = i>k ? i : k;
    }
    else
        result = j>k ? j :k;
    
    return result;
}
int min_val (int i, int j, int k){
    int result;
    if(i>j){
        result = j<k ? j : k;
    }
    else
        result = i<k ? i :k;
    
    return result;
}
