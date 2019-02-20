/*
Input: [1, 2, 3, 4], "+"
Output: [1, 1+2, 1+2+3, 1+2+3+4] -> [1, 3, 6, 10]

Input: [1, 2, 3, 4], "*"
Output: [1, 1*2, 1*2*3, 1*2*3*4] or [1, 2, 6, 24]
*/
export const reverseString = (prefixArray, binOpertor) => {
    for (let index = 0; index < prefixArray.length; index++) {
        let result = (binOperator === "*" || binOperator === "//") ? 1 : 0;
        for (let j = 0; j < index; j++) {
            if(binOpertor === "*") {
                result = result * prefixArray[j];
            } else if (binOpertor === "//") {
                result = result/prefixArray[j];
            } else if (binOpertor === "+") {
                result = result + prefixArray[j];
            } else if (binOpertor === "-") {
                result = result - prefixArray[j];
            }
            else {
                console.log("Unsupported operand");
                break;
            }
        }
        prefixArray[index] = result;
    }  
};