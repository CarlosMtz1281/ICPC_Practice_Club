
# CodeForces A-Way Too Long Words solved by me

# Problem Link ====> https://codeforces.com/contest/71/problem/A



num_words = int(input())

while num_words > 0:
    word = input()
    lenght = len(word)
    if len(word) > 10:
        letter_1 =word[0]
        letter_2 =word[(int(lenght)-1)]
        separation = str(int(lenght)-2)
        abr = (letter_1,separation,letter_2)
        abr = ''.join(abr)
        print(abr)
    else: 
        print(word)
    num_words = num_words - 1

