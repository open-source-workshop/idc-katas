export const isPrime = (num) => {
    for(let i=1; i<=num/2; i++) {
        if(num % i == 0){
            return false;
        }
    }
    return true;
}