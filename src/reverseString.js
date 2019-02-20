/*
Input: abcd
Output: dcba
*/
export const reverseString = (string) => {
    return string.split("").reverse().join("");
};