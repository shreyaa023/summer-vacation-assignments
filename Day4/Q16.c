/*Write a program to Print Armstrong numbers in a range*/
# Function to check Armstrong number
def is_armstrong(num):
    order = len(str(num))
    temp = num
    total = 0

    while temp > 0:
        digit = temp % 10
        total += digit ** order
        temp //= 10

    return total == num

# Input range
start = int(input("Enter starting number: "))
end = int(input("Enter ending number: "))

print(f"Armstrong numbers between {start} and {end} are:")

for num in range(start, end + 1):
    if is_armstrong(num):
        print(num)
