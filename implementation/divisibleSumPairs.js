// Complete the divisibleSumPairs function below.
function divisibleSumPairs(n, k, ar) {
  var count = 0;
  for(var i=0; i<n; ++i)
      {
          for(var j=1; j<n; ++j)
              {
                  if(i<j && (ar[i]+ar[j])%k==0)
                      ++count;
              }
      }
  return count;
}