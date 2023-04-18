# number of test cases
n = int(input())

for i in range(n):
    # s = non-integers representing the sum
    # d = difference between two scores
    # map() converts string to integers
    s, d = map(int, input().split())
    # score1: sum/2 (number of scores)
    score1 = (s + d) / 2
    # score2: difference/2 (number of scores)
    score2 = (s - d) / 2
    # checks if the output is a positive number and equal to their integer equivalent
    if score1 >= 0 and score1 == int(score1) and score2 >= 0 and score2 == int(score2):
        print("{} {}".format(int(score1), int(score2)))
    else:
        print("impossible")
