t = int(input())

for i in range(t):
  s = input().split(' ');
  for j in range(len(s)-1, -1, -1):
    print(s[j], end=' ')
  print()