
/*
Input: [4 , 3 , 5]
Output: 8
*/

export const addOdd= (arr) => {
   var sum =0;
	for (i=0;i<arr.length;i++){
      x= arr[i];
		if(x%2!=0){
          sum= sum+x;
        }
			
    }
    return sum;
};