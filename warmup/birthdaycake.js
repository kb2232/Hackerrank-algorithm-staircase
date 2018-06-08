var arr = [];

function main()
{
  
}

function birthdaycakes(arr)
{
  var counter=0, max=0;
  for(var i=0; i<arr.length; i++)
    if(arr[i]>=max) max=arr[i];
  for(var i=0; i<arr.length; i++)
    if(arr[i]==max) counter++
  return counter;
} 
