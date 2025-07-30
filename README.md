# 🎯 Number Guessing Game in C++

This repository contains two versions:

- 🧍 Basic version (Human guesses a randomly generated number)
- 🤖 AI version (Computer guesses your number using binary search)

---

## 📁 Folder Structure

number-guessing-game-cpp/
├── basic_version/
│ └── main.cpp
├── ai_version/
│ └── main.cpp
└── README.md

yaml
Copy
Edit

---

## 💡 How to Run

Use any C++ compiler (like `g++`):

### ▶️ Basic Version

```bash
cd basic_version
g++ main.cpp -o game
./game

🧠 AI Version
bash
Copy
Edit
cd ai_version
g++ main.cpp -o ai_game
./ai_game

## 📚 What I Learned

### Basic Version
- Used loops and conditionals to create a simple guessing game
- Learned about `srand()` and seeding random numbers
- How to use srand(time(NULL)) and rand() for random number generation



### AI Version
- Understood binary search logic for AI guessing
- Created a basic simulation of AI thinking
- Discovered that in a 1–100 range, 7 guesses are enough to find any number thanks to binary search (since log₂(100) ≈ 6.64).
- Also added a caution for cases where user cheats and tries to change their number mid game . Basic logic is in place to detect inconsistent input  and notify the user



- Learned the importance of excluding binary files like `.exe` from Git
- Improved my Git & GitHub workflow (pushing code, creating commits, writing a README)

🙋‍♂️ Author
Made with ❤️ by Rajneesh
[GitHub Profile](https://github.com/Rajneeshh321)
