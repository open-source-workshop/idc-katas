function count_even_numbers(arr) {
    // here arr is an integer array.
    
    var count = 0, value;
    
    for (var i = 0; i <= arr.length; i++) {
        value = arr[i];
        if (value % 2 === 0 && value >= 2) {
            count ++;
        }
    }
    console.log(count);
}
