t = int(input());

for i in range(t):
  n, m, k = [int(i) for i in input().split()]
  a = [int(i) for i in input().split()]
  b = [int(i) for i in input().split()]
  c = [int(i) for i in input().split()]
  res = []

  minl = min(n, m, k)

  if minl == n:
    for i in a:
      if (i in b) and (i in c): res.append(i)
  elif minl == m:
    for i in b:
      if (i in a) and (i in c): res.append(i)
  else:
    for i in c:
      if (i in a) and (i in b): res.append(i)

  if len(res) == 0: print("NO")
  else: 
    for i in res: print(i, end=' ')
  print()
