
#CodeForces problem 4A-Watermelon Solved by me

#Link to problem ====> https://codeforces.com/problemset/problem/4/A 



weight = int(input())
if weight == 2:
    print("NO")
else:
    answer = weight % 2
    if answer == 0:
       print("YES")
    else: 
        print("NO")
