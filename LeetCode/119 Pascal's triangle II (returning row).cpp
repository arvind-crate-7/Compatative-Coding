vector<int> getRow(int rowIndex) {
    vector<int> ans1;
    ans1.push_back(1);
    if(rowIndex == 0){
        return ans1;
    }
    ans1.push_back(1);
    for(int i =2;i<= rowIndex;i++){
        vector<int> temp(i+1);
        temp[0] = 1;
        for(int j = 1;j<i;j++){
            temp[j] = ans1[j-1] + ans1[j];
        }
        temp[i] = 1;
        ans1.clear();
        ans1 = temp;
    }
    return ans1;
}
