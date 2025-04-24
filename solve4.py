S = input()
K = int(input())

n = len(S)
stack = []
to_pick = K

for i in range(n):
    while stack and S[i] < stack[-1] and len(stack) + (n - i) > to_pick:
        stack.pop()
    if len(stack) < to_pick:
        stack.append(S[i])

result = ''.join(stack)
print(result)
