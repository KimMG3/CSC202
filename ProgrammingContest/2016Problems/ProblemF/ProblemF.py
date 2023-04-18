# Problem F: Hubris of Olympic Proportions
c = int(input())

for i in range(c):
    scores = list(map(int, input().split()))[1:]
    avg = sum(scores) / len(scores)
    above_avg = sum(score > avg for score in scores)
    percentage = round(above_avg / len(scores) * 100)
    print(percentage)
