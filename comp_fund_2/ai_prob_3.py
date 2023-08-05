

# closed_set.remove(m) open_set.add(m)

# if n == None:
# print('Path does not exist!') return None

# # if the current node is the stop_node
# # then we begin reconstructin the path from it to the start_node if n == stop_node:
# path = []

# while parents[n] != n: path.append(n)
# n = parents[n]

# path.append(start_node)

# path.reverse()

# print('Path found: {}'.format(path)) return path


# # remove n from the open_list, and add it to closed_list # because all of his neighbors were inspected open_set.remove(n)
# closed_set.add(n)

# print('Path does not exist!') return None

# #define fuction to return neighbor and its distance #from the passed node
# def get_neighbors(v):
# if v in Graph_nodes: return Graph_nodes[v]
# else:
# return None
# #for simplicity we ll consider heuristic distances  given #and this function returns heuristic distance for all nodes def heuristic(n):
# H_dist = { 'A': 11,
# 'B': 6,
# 'C': 99,
# 'D': 1,
# 'E': 7,



