int diagonalDifference(vector<vector<int>> a) {
    /*
     * Write your code here.
     */
    int sum=0,sum1=0,diff;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<a.size(); j++)
        {
            if(i==j)
                sum += a[i][j];
            if(i+j==a.size()-1)
                sum1 += a[i][j];
        }
        diff = sum-sum1;
        
        
    }
    
    return abs(diff);
        

}