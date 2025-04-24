def smallest_subsequence(S, K):
    # Create a stack to hold the subsequence
    stack = []
    
    # Go through each character in the string
    for i, char in enumerate(S):
        # While there is something in the stack and the current character is smaller
        # than the last character in the stack and we can still form a subsequence of length K
        while stack and stack[-1] > char and len(stack) + (len(S) - i) > K:
            stack.pop()  # Remove the last character from the stack
        
        # Add the current character to the stack if the subsequence length is less than K
        if len(stack) < K:
            stack.append(char)
    
    # Join the stack to get the final result as a string
    return ''.join(stack)

# Taking input from the user dynamically
S = input()
K = int(input())

# Call the function and print the result
print(smallest_subsequence(S, K))
