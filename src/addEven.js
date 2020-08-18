// add even values in an array and return sum
export const addEven = (arr) => {
    let sum = 0;
    for (i in arr) {
        sum += (i % 2 == 0) ? i : 0;
    }
    return sum;
};