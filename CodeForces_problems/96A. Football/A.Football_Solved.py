#CodeForces problem: Footbal solved by me 

#Link to problem =====> https://codeforces.com/problemset/problem/96/A 

ones = 0
zeros = 0
lis = list()
players = input()

for z in players:
    lis.append(z)

for x in lis:
    if int(x) == 1:
        ones = ones + 1
        zeros = 0
        if ones == 7: break
    else:
        zeros = zeros + 1
        ones = 0
        if zeros == 7: break

if ones >= 7 or zeros >= 7:
    print("YES")
else:
    print("NO")