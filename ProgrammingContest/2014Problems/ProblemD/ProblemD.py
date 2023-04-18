# Problem D: Perfect Number (2014)
# Identifies if the number is a perfect number or not
# perfect number is when the sum of all of its divisors are equal to the number.

import math

# Get the number of test cases from the user
c = int(input())

# Loop through each test case
for i in range(c):
    # Get the integer to check for perfection from the user
    n = int(input())

    # Find all divisors of the number less than itself
    divisors = []
    for j in range(1, int(math.sqrt(n))+1):
        if n % j == 0:
            divisors.append(j)
            if j != 1 and j != n//j:
                divisors.append(n//j)

    # Sort the list of divisors in increasing order
    divisors.sort()

    # Check if the number is perfect and output the result
    if sum(divisors) == n:
        print(*divisors, "YES")
    else:
        print(*divisors, "NO")
