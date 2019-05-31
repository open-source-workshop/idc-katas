#check if a given no is prime or composite

def checkPrime(num):
	isPrime = True
	for i in range(2, num):
		if num % i == 0:
			isPrime = False
			break
	if isPrime:
		return True
	return False
