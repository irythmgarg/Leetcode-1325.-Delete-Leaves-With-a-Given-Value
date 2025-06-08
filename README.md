# Leetcode-1325.-Delete-Leaves-With-a-Given-Value

# 🌿 Remove Leaf Nodes from Binary Tree

This project implements a function to **remove all leaf nodes** in a binary tree that have a specified target value.

---

## 🧠 Approach

- Use **post-order traversal (DFS)** to process children first.
- Recursively remove target-valued leaves in the left and right subtree.
- After recursion, check if the current node became a leaf with the target value.
- If yes, remove it by returning `nullptr`.
- Otherwise, return the current node.

---

## ⏱ Time and Space Complexity

| Metric              | Value                        |
|---------------------|------------------------------|
| 🕒 Time Complexity   | `O(N)` (visit each node once) |
| 💾 Space Complexity  | `O(h)` recursion stack (h = tree height) |

---

## ✍️ Author

**Ridham Garg**  
🎓 B.Tech Computer Engineering, Thapar University, Patiala  
💻 Focused on writing clean and efficient tree algorithms!
