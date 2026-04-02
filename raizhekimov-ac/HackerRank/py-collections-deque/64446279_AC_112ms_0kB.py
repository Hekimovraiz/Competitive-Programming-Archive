from collections import deque as d

dq = d()
qr = int(input())

for _ in range(qr):
    k = input().split()
    if k[0] == "append": dq.append(int(k[1]))
    elif k[0] == "appendleft": dq.appendleft(int(k[1]))
    elif k[0] == "pop": dq.pop()
    elif k[0] == "popleft":dq.popleft()

print(*dq)
