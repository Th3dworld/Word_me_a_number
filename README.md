# Word_me_a_number  

A simple C++ program that converts numbers between **0 and 9999** into their word equivalents (e.g., `1342 → "One Thousand Three Hundred and Forty Two"`).  

---

## 📖 Overview  
This project implements a `Numbers` class that:  
- Accepts an integer input in the range **0–9999**.  
- Uses arrays to map digits, teens, tens, hundreds, and thousands to their word forms.  
- Outputs the number in human-readable English words.  

The logic is built around dividing the input into place values (thousands, hundreds, tens, and ones) and sequentially converting each part to words.  

---

## 🛠 Features  
- Converts **single digits** (e.g., `7 → "Seven"`)  
- Handles **teens** (e.g., `15 → "Fifteen"`)  
- Handles **tens** (e.g., `90 → "Ninety"`)  
- Converts **hundreds and thousands** (e.g., `2305 → "Two Thousand Three Hundred and Five"`)  
- Ignores unnecessary `"Zero"` words in intermediate positions  

