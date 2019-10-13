// Amortized Time Complexity: O(α(n)) , about 4 operations for n < 10e600

vector < int > parent, depth;
void make_set(int i) {
    parent[i] = i;
    depth[i] = 0;
}
int find_set(int i) {
    if (parent[i] == i)
        return i;
    return parent[i] = find_set(parent[i]);
}
void union_set(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (depth[a] < depth[b])
            swap(a, b);
        parent[b] = a;
        if (depth[a] == depth[b])
            ++depth[a];
    }
}
int main() {
    int n;
    cin >> n;

    parent.resize(n);
    depth.resize(n);
    for(int i = 0 ; i < n ; ++i)
    	make_set(i);
    // Now use as per your requirements

}