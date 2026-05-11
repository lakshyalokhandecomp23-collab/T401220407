graph={
  0:[1,2,3],
  1:[0],
  2:[0,3],
  3:[0,2]
}

visited = set()

def dfs(v):
  visited.add(v)
  print(v, end=" ")
  for i in graph[v]:
    if i not in visited:
      dfs(i)

print("DFS :- \n")
dfs(0)
