
# A Team-CodeForces problem solved by me 

#link to problem https://codeforces.com/problemset/problem/231/A 

problems = int(input())

suma = 0
total = 0
while problems > 0:
    problems = problems - 1
    opinion = input()
    numbers = opinion.split()
    for num in numbers:
        suma = suma + int(num)
        if suma > 1:  
            total = total + 1
            suma = 0
    suma = 0       
            
    
    
   
print (total)


