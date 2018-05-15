void staircase(int n) {
    /*
     * Write your code here.
     */
    for(int i=1; i<=n; i++)
    {
        cout <<setw(n);
        cout << string(i,'#') <<endl;
    }

}