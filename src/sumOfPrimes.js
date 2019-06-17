var arr = [1,2,3,4,5,6,7,8,9,11,13,17]; // Enter your given number into array

function sumOfPrime (arr){
  var sum = 0;
  for(var j=0; j<arr.length; j++){
    if(checkPrimeNo(arr[j])){
      sum += arr[j];
    }
  }
  console.log(sum);
}

function checkPrimeNo(number){
        var flag=0;

		for(var i=2; i <= number/2; i++)
		{
			if(number%i == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0  && number != 1 && number != 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}




