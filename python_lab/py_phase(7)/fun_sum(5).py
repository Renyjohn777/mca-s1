def add(*args):
    total = 0
    for i in args:
        total += i
    print("Sum is", total)
    return total  # Optional, but good practice if you need the result later

input_number = input("Enter integers separated by spaces: ").split()
input_number = [int(num) for num in input_number]

result = add(*input_number)
