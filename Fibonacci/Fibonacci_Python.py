#Fibonacci implementado en Python
def fibonacci(x):
    n1 = 0
    n2 = 1
    for i in range(x):
        n = n1 + n2
        n2 = n1
        n1 = n
    return n

print(fibonacci(19))

#Complejidad temporal O(n)