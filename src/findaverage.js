/*
input :[1,2,3]
output:6
 */

export const arrayAverage = (array) => {
    let sum = 0;
    let len = array.length;
    array.forEach( i => {
        sum += array[i];
    });

    return sum/len;
};