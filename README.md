# 🏨 Hotel Room Reservation System (C Mini Project)

A simple yet effective **C programming mini-project** that demonstrates core programming concepts such as **arrays**, **conditionals**, and **input validation** through a room reservation system for **Haritha Villa** — a cozy hotel with just **5 rooms**.

---

## 📖 Overview

This console-based application simulates a basic hotel management system.  
It enables the hotel to manage **guest check-ins**, **check-outs**, and **room status** — all while ensuring **input validation** and a smooth user experience.

---

## 🎯 Key Features

- 🛎️ **Check-In:**  
  Guests can book a room by providing their name and the number of guests (1-4).

- 🚪 **Check-Out:**  
  Rooms are freed up when guests check out.

- 🛏️ **Room Status Check:**  
  View the current status of all rooms:
  - Room number
  - Occupancy status
  - Number of guests (if occupied)

---

## ✅ Input Validation

- 🚫 **Prevents Overbooking:**  
  Blocks new bookings when all 5 rooms are occupied.

- 🔢 **Valid Guest Count:**  
  Ensures the number of guests per room is between **1 and 4**.

- ❌ **Error Handling:**  
  Detects and manages invalid room numbers during check-out.

---

## 🛠️ Built With

- 📘 C Programming Language
- 🖥️ Console Interface (Standard Input/Output)

---

## 🧪 Concepts Practiced

- Arrays  
- Functions  
- Conditional statements  
- Loops  
- Input validation  
- Simple state management using data structures

---

## 🧰 How to Run

1. Open the project in your favorite C IDE (e.g., Code::Blocks, Dev C++) or a terminal with a GCC compiler.
2. Compile the source file:
   ```bash
   gcc hotel.c -o hotel
