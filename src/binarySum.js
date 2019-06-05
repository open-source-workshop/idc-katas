// Sum two integers (Bin1 + Bin2) represented as binary numbers and return decimal value

var ConvertBase = function (num) {
    return {
        from : function (baseFrom) {
            return {
                to : function (baseTo) {
                    return parseInt(num, baseFrom).toString(baseTo);
                }
            };
        }
    };
};
    
// binary to decimal
ConvertBase.bin2dec = function (num) {
    return ConvertBase(num).from(2).to(10);
};

export const binaryDecimalSum = (Bin1, Bin2) => {
    return (ConvertBase.bin2dec(Bin2) + ConvertBase.bin2dec(Bin2));
}