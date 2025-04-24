# Function to find the missing number
def find_missing_number(arr, n):
    # Calculate the expected sum of numbers from 1 to n+1
    total_sum = (n + 1) * (n + 2) // 2
    # Calculate the actual sum of the array
    actual_sum = sum(arr)
    # The missing number is the difference
    return total_sum - actual_sum

# Input the size of the array
n = int(input())

# Input the array elements
arr = list(map(int, input().split()))

# Find and print the missing number
missing_number = find_missing_number(arr, n)
print(missing_number)
