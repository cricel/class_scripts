def sum_even_numbers(n):
    sum = 0
    for i in range(1, n+1):
        sum += i
    n = n + 12
    return sum

n = 10
print("Sum of even numbers:", sum_even_numbers(n))
print("n:", n)
