### 🛍️ Simple Order Management System (C++)
This project is a basic customer order management system developed in C++. 
After the user provides their name and city, they can browse available products, place orders, cancel items, and view their current orders.

### 🚀 Features
Prompt for user name and city
View available products
Place an order (T-Shirt, Jean, Sneakers, Socks)
Cancel a previously ordered item
Display all ordered items
Clear terminal and return to main menu

### 🧾 Classes Used
Customer
setName(), setCity() → Gets user input
addItem(string item) → Adds an item to the order list
deleteItem(string item) → Removes an item from the order list
displayOrderedItems() → Displays current orders
HelloScreen() → Welcomes the user

### 🔧 Compile and Run
Linux/macOS/WSL:
```bash
g++ -o order_app main.cpp
./order_app
```

Windows (CMD):
```bash
g++ -o order_app.exe main.cpp
order_app.exe
```
