n = int(input())
fence = list(map(int, input().split()))
m = int(input())
orders = list(map(int, input().split()))

seen = set()

for color in reversed(orders):
    if color in seen:
        continue
    seen.add(color)

    # find leftmost and rightmost of current color
    l, r = -1, -1
    for i in range(n):
        if fence[i] == color:
            if l == -1:
                l = i
            r = i

    if l == -1 or l == r:
        continue

    for i in range(l, r + 1):
        fence[i] = color

print(*fence)
