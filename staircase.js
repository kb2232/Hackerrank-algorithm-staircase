function staircase(n) {
  var str = " ",cht = '#';
    var k=n;
  for(var i=1; i<=n; i++)
  {
    console.log(str.repeat(k-1)+cht.repeat(i));
    --k;
  }
}