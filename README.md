# 📊 LeetCode Problem: Domino and Tromino Tiling

## 🧩 Problem Statement

You have two types of tiles: a `2 x 1` **domino shape** and a **tromino shape**. You may **rotate** these shapes.
Given an integer `n`, return the number of ways to tile an `2 x n` board. Since the answer may be very large, return it **modulo** `10^9 + 7`.


> **Note :**
> - In a tiling, every square must be covered by a tile. Two tilings are different if and only if there are two 4-directionally adjacent cells on the board such that exactly one of the tilings has both squares occupied by a tile.



## 🧠 Approach: Two-Pointer Technique

> Initialize an **answer vector** ans with **base cases**:
> - `ans[1] = 1`;
> - `ans[2] = 2`;
> - `ans[3]= 5`;

> Traverse from `3 -> n-1`, and apply the relation:
> - `ans[i] = (ans[i-1]*2+ans[i-3])%MOD`;

- Return the last element `ans[n-1]`.



## ✅ Example Walkthrough

### Example 1

##### Input: n = 3
##### Output: 5


### Example 2

##### Input: n = 1
##### Output: 1



## 🛠️ Constraints

- `1 <= n <= 1000`
