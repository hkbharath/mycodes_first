That problem can be solved by union find algorithm.

The algorithm maintains tree structures (using array) which gives you the different connected components.

We maintain an array `parent`, such that `parent[i]` stores parent node of `ith` node, if `ith` node itself is independent or if `ith` node is a root of some connected component then `parent[i] = i`.

We use one more array called `size`, such that `size[i]` stores the number of all children of `ith` node (including 'ith' node)

initialize `parent[i] = i` for all `i` < `vertices.size()` and `connected_component = 0`

now algorithm iterates through all edges, 

    for each edge from u to v in graph G:
        if(root(u) == root(v))
            already connected;
        else :
            //this condition is used to make sure that our tree doest go too deep(instead we make it
            //broad), if it goes too deep then time taken for finding root increases. 
            if(size[u] > size[v])
                 parent [v] = u;
            else
                 parent [v] = u;
            connected_components++;

now `connected_component` gives number of independent graphs in a given graph, if we want you want to find the content of independent components then run a `dfs algorithm` or `bfs algorithm` using `parent` array.
 
for more detailed explanation refer: [Alogorithms] [1]
[1]: http://algs4.cs.princeton.edu/15uf/   

 
