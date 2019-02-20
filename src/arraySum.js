/*
input :[1,2,3]
output:6
 */

export const arraySum = (array) => {
    let sum = 0;
    array.forEach( i => {
        sum += array[i];
    });
    return sum;
};