def isIPAddress(address):
    # IP Address is of the form x1.x2.x3.x4
    # where all x1, x2, x3, x4 are greater than or equal to zero and less than equal to 255
    numbers = address.split('.')
    isIP = True
    for word in numbers:
        if word.isdigit()==False:
            isIP = False
            break
        else:
            number = int(word)
            if number>255 or number<0:
                isIP = False
                break
    if len(numbers)!=4:
        isIP = False
    
    return isIP


if __name__=='__main__':
    address = input()
    isIP = isIPAddress(address)
    print(isIP)



