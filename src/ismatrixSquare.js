/*
input [[2,2],[2,2]]
output true
*/
export const isMatrixSquare = (matrix) => {
    if (matrix.length()===matrix[0].length()) {    //Some dummy condition
        return "true";
    }
    return "false";
};