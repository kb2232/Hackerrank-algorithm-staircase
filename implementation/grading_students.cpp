int multipleOf5(int n)
{
    while(true)
    {
        ++n;
        if(n % 5 == 0)
            return n;
    }
}
/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades) {
    /*
     * Write your code here.
     */
    vector<int> finalGrades;
    for(int i = 0; i<grades.size(); i++)
    {
        if(grades.at(i)<38)
            finalGrades.push_back(grades.at(i));
        else {
            if(((multipleOf5(grades.at(i)))-(grades.at(i))) < 3)
                finalGrades.push_back((multipleOf5(grades.at(i))));
            else 
                finalGrades.push_back(grades.at(i));
                
        }      
    }
    return finalGrades;

}

