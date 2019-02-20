export const X_and_O = (string) => {
    var x = string.replace(/[^x]/g, "").length;
    var o = string.replace(/[^o]/g, "").length;
    if(x==o)
    	return true;
    return false;
};