
# 🌳 Binary Tree Implementation (Preorder + Level Order Traversal)

## 📌 Overview

Is project me humne **Binary Tree** implement kiya hai using:

* Preorder traversal (tree creation)
* Level Order Traversal (BFS)

## 🧠 Concepts Used

* Binary Tree
* Recursion
* Queue (STL)
* Breadth First Search (BFS)



## 🌲 Tree Structure

```
        1
       / \
      2   3
         / \
        4   5
```

---

## 📥 Input (Preorder Representation)

```cpp
int preorder[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
```

### 🔹 Explanation

* `-1` represents **NULL node**
* Format:
  `Root → Left → Right`

---

## ⚙️ Functions Description

### 🔹 1. CreateTree()

```cpp
Node* CreateTree(int preorder[])
```

* Preorder array se binary tree banata hai
* Recursion ka use hota hai
* `-1` milne par NULL return karta hai

---

### 🔹 2. LevelOrder()

```cpp
void LevelOrder(Node* root)
```

* Tree ko level by level print karta hai
* Queue ka use hota hai (BFS)

---

## ▶️ Output

```
1 2 3 4 5
```

---

## 🔄 How It Works

1. Preorder array se tree recursively build hota hai
2. Har node ke liye:

   * Left subtree create hota hai
   * Right subtree create hota hai
3. Level order traversal me:

   * Queue me nodes store hote hain
   * FIFO order me print hote hain

---

## 🚀 How to Run

### 🔹 Step 1: Compile

```bash
g++ filename.cpp -o output
```

### 🔹 Step 2: Run

```bash
./output
```

---

## 📂 File Structure

```
├── main.cpp
└── README.md
```

---

## ✨ Features

* Simple and beginner-friendly code
* Recursive tree creation
* Efficient traversal using queue

---

## 📌 Future Improvements

* User input based tree creation
* Inorder & Postorder traversal
* Height, Diameter calculation

---

## 🙌 Author

**Vaishnavi Yadav**

