# Function to check if a number is an Armstrong number
def is_armstrong(num):
   
    digits = str(num)
   
    num_digits = len(digits)
 
    sum_of_powers = sum(int(digit) ** num_digits for digit in digits)

    return sum_of_powers == num


armstrong_numbers = [num for num in range(10, 1001) if is_armstrong(num)]
print(armstrong_numbers )