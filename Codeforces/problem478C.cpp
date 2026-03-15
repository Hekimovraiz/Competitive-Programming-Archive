/*
 * Problem: 478C
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/478/C
 */

r, g, b = map(int, input().split())
print(min((r + g + b) // 3, (r + g + b) - (max(r, g, b))))
