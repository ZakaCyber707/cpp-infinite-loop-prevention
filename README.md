# C++ Loop Control: Conditional Skip Logic

<p align="center">
<img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
<img src="https://img.shields.io/badge/Logic-Counter%20Management-blueviolet?style=for-the-badge" />
<img src="https://img.shields.io/badge/Status-Fixed-green?style=for-the-badge" />
<img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" />
</p>

📊 Logic Overview
This project explores a critical edge case in C++ programming: managing loop counters alongside jump statements.

- **The Challenge:** When using `continue`, the program jumps back to the loop header. If the increment operation is skipped, the loop variable stays the same, creating an **infinite loop**.
- **The Solution:** This code demonstrates the "Increment-Before-Jump" pattern. By incrementing `i` inside the `if` block before calling `continue`, we ensure the loop maintains forward progress.
- **Functional Goal:** The program prints all numbers up to the user's input but specifically omits the number **7**.

🛠️ Features
- **Infinite Loop Safeguard:** Demonstrates professional-grade control flow handling.
- **Conditional Filtering:** Uses a specific trigger to skip data without stopping the entire process.
- **Input Flexibility:** Works dynamically based on the user's provided range.

🚀 Execution Guide
1. **Compile:** `g++ loop_skip_logic.cpp -o SkipDemo`
2. **Run:** `./SkipDemo`
3. **Observation:** Enter `10`. Notice the output sequence: `1 2 3 4 5 6 8 9 10`.

---
**Author:** Muhammad Zaka | Cyber Security Analyst & Tech Educator
