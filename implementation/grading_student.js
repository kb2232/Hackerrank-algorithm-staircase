function multipleoffive(grade)
{
    while(true)
        {
            ++grade;
            if(grade%5==0)
                return grade;
        }
}

/*
 * Complete the gradingStudents function below.
 */
function gradingStudents(grades) {
    /*
     * Write your code here.
     */
    //create new array
    var finalgrades = new Array();
    for(var i =0; i<grades.length; i++)
        {
            if(grades[i]<38)
                {
                    finalgrades.push(grades[i]);
                }
            else {
                if((multipleoffive(grades[i])-grades[i]) < 3)
                    {
                        finalgrades.push(multipleoffive(grades[i]));
                    }
                else{
                    finalgrades.push(grades[i])
                }
            }
        }
    return finalgrades;

}