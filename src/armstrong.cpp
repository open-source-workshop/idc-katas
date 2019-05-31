//function to check if the number is an armstrong number or not

bool armstrong(int num)
{
    int rem = 0, num_copy = num, sum = 0;
    while(num_copy)
    {
        rem = num_copy%10;
        sum += rem*rem*rem;
        num_copy /= 10;
    }
    return sum==num;
}
