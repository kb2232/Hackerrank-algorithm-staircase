void plusMinus(vector<int> a) {
    /*
     * Write your code here.
     */
    int countP=0,count0=0, countN=0;
    for(int x=0; x<a.size(); x++)
    {
        if(a[x] >0)
            ++countP;
        if(a[x] ==0)
            ++count0;
        if(a[x] <0)
            ++countN;
    }
    cout<<double(countP/double(a.size()))<<endl;
    cout<<double(countN/double(a.size()))<<endl;
    cout<<double(count0/double(a.size()))<<endl;
}