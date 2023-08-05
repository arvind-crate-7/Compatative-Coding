vector<int> leaders(int a[], int n){
    // Code here
    int max = -1;
    vector<int> result;
    for(int i = n-1;i >= 0;--i){
        if(a[i] >= max){
            result.push_back(a[i]);
            max = a[i];
        }
    }
    reverse(result.begin(),result.end());
    return result;
    
}
