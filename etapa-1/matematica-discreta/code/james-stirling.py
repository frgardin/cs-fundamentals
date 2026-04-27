import math
import matplotlib.pyplot as plt

n = int(input("Digite n: "))

fact_n = math.factorial(n)

fact_james_stirling = math.sqrt(2*math.pi*n)*(n**n)*(math.e**(-n))

diff = fact_n-fact_james_stirling

print(f"The factorial of {n} is {fact_n}\n")
print(f"The James Stirling Factorial approximation of {n} is {fact_james_stirling}\n")
print(f"The difference is {diff}")


def stirling(k):
    return math.sqrt(2 * math.pi * k) * (k ** k) * (math.e ** (-k))


ks = list(range(1, n + 1))
exact = [math.factorial(k) for k in ks]
approx = [stirling(k) for k in ks]
rel_error = [abs(e - a) / e * 100 for e, a in zip(exact, approx)]

fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(12, 5))

ax1.plot(ks, exact, "o-", label="n! (exact)")
ax1.plot(ks, approx, "s--", label="Stirling approximation")
ax1.set_yscale("log")
ax1.set_xlabel("n")
ax1.set_ylabel("value (log scale)")
ax1.set_title("Factorial vs Stirling")
ax1.legend()
ax1.grid(True, which="both", linestyle=":")

ax2.plot(ks, rel_error, "x-", color="crimson")
ax2.set_xlabel("n")
ax2.set_ylabel("relative error (%)")
ax2.set_title("Stirling relative error")
ax2.grid(True, linestyle=":")

plt.tight_layout()
plt.show()
