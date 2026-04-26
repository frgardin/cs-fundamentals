import math

n = int(input("Digite n: "))

fact_n = math.factorial(n)

fact_james_stirling = math.sqrt(2*math.pi*n)*(n**n)*(math.e**(-n))

diff = fact_n-fact_james_stirling

print(f"The factorial of {n} is {fact_n}\n")
print(f"The James Stirling Factorial approximation of {n} is {fact_james_stirling}\n")
print(f"The difference is {diff}")
