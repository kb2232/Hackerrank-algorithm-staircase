long aVeryBigSum(int n, vector<long> ar) {
    /*
     * Write your code here.
     */
    long sum=0;
    for(int x=0; x<ar.size(); x++)
        sum += ar.at(x);
    return sum;
}
