float average(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];    
    }

    return sum / (float)size;
}

float power(int num, int exp)
{
    int res = 1;

    for (int i = 0; i < exp; i++)
    {
        res *= num;
    }
    
    return res;
}

float square_root(int num)
{
    float guess = num / 2.0; // Initial guess
    const float EPSILON = 0.0001;  // Precision threshold
    float new_guess = (guess + num / guess) / 2.0;

    while (guess - new_guess >= EPSILON || new_guess - guess >= EPSILON) {
        guess = new_guess;
        new_guess = (guess + num / guess) / 2.0;
    }

    return guess;
}

int factorial(int num)
{
    if (!num)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}